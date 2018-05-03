#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QStandardItemModel"
#include <QStringListModel>
#include <iostream>
#include <loguru.h>
#include <QtWidgets>

/**
 * Inicializacion de parametros usadas para mostrar datos
 */
QStringListModel *modelStdout = new QStringListModel();
QStandardItemModel *modelRAM = new QStandardItemModel();
QStringList Stdout;
int CurrentLine = 0;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    highlighter = new Highlighter(ui->CodeEditorPlainText->document());

    // Creacion de columnas principales de tabla RAM View
    modelRAM->setHorizontalHeaderItem(0, new QStandardItem(QString("Direction"))); // titulos de las columnas
    modelRAM->setHorizontalHeaderItem(1, new QStandardItem(QString("Value")));
    modelRAM->setHorizontalHeaderItem(2, new QStandardItem(QString("Tag")));
    modelRAM->setHorizontalHeaderItem(3, new QStandardItem(QString("References")));
    ui->RAMtableView->setModel(modelRAM);   // Montaje de nombres de columnas
    ui->RAMtableView->setEditTriggers(QAbstractItemView::NoEditTriggers);   // bloqueo a edicion de tabla

    ui->StdoutlistView->setEditTriggers(QAbstractItemView::NoEditTriggers); // bloqueo a edicion de Stdout
    UpdateLogView();    // iniciacion de muestra de datos del Log application
    ui->AppLogView->verticalScrollBar()->setValue(ui->AppLogView->verticalScrollBar()->maximum());
    Stdout.append(">>");
    modelStdout->setStringList(Stdout);
    ui->StdoutlistView->setModel(modelStdout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * Llamado a iniciar el Debugger
 */
void MainWindow::on_RunButton_clicked()
{
    LOG_F(INFO, "Execution started");
    UpdateLogView();

    // Desactivacion y activacion de botones en IDE
    ui->RunButton->setEnabled(false);
    ui->StopButton->setEnabled(true);
    ui->StepButton->setEnabled(true);
    CurrentLine = 0;
}

/**
 * Boton encargado de dar los saltos en el codigo
 */
void MainWindow::on_StepButton_clicked()
{
    // parseo de cada linea
    QStringList lines = ui->CodeEditorPlainText->toPlainText().split('\n', QString::SkipEmptyParts);
    if (CurrentLine < lines.size()) {

        parser ->parseCode(lines.at(CurrentLine).toLocal8Bit().constData());

        UpdateLogView();
        CurrentLine += 1;
        UpdateRamView();
    } else
        on_StopButton_clicked();
}

/**
 * Método encargado de detener la ejecucion del codigo
 */
void MainWindow::on_StopButton_clicked()
{
    if(!ui->RunButton->isEnabled()){
        ui->RunButton->setEnabled(true);
        ui->StepButton->setEnabled(false);
        ui->StopButton->setEnabled(false);
        CurrentLine = 0;
        LOG_F(INFO, "Execution stopped");
        UpdateLogView();
    }
}

/**
 * Limpieza de Application log
 */
void MainWindow::on_ClearButton_clicked()
{
    ui->AppLogView->clear();
    QFile file("C_IDE_log.log");
    file.remove();
    loguru::add_file("C_IDE_log.log", loguru::Truncate, loguru::Verbosity_INFO);
}

/**
 * Actualizacion del Log para mostrar errores a tiempo real
 */
void MainWindow::UpdateLogView() {
    QFile file("C_IDE_log.log");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(nullptr, "info", file.errorString());
    }
    QTextStream stream(&file);
    stream.seek(159);
    ui->AppLogView->setText(stream.readAll());
    ui->AppLogView->verticalScrollBar()->setValue(ui->AppLogView->verticalScrollBar()->maximum());
    file.close();
}

/**
 * Actualizacion de tabla Ram View
 */
void MainWindow::UpdateRamView() {      //QJsonObject &json

    //QJsonArray contents = json["Contents"].toArray();

    for(json json1 : jsonList) {
//        QJsonDocument d(contents[i].toObject());
        //std::cout << d.toJson(QJsonDocument::Compact).toStdString() << std::endl;

        QList<QStandardItem *> fillcolumns;

//        contents[i].toObject().value("Direction").toString()
        string position = json1["pos"];
        QString str = QString::fromUtf8(position.c_str());
        QStandardItem *direction =
                new QStandardItem(str);
        fillcolumns.append(direction);

//        QVariant val = contents[i].toObject().value("Value").toVariant();
//        val.toString().toStdString()
        string valorJson = json1["valor"];
        QString s = QString::fromStdString(valorJson);
        QStandardItem* value =
                new QStandardItem(s);
        fillcolumns.append(value);

//        contents[i].toObject().value("Tag").toString("no tag")
        QString tagName = QString::fromStdString(json1["etiqueta"]);
        QStandardItem *tag =
                new QStandardItem(tagName);
        fillcolumns.append(tag);

//        contents[i].toObject().value("References").toInt(0);
        int ref = json1["ref"];
        QString referenceCounter = QString::fromStdString(std::to_string(ref));
        QStandardItem *references =
                new QStandardItem(referenceCounter);
        fillcolumns.append(references);

        modelRAM->appendRow(fillcolumns);
    }
}

void MainWindow::stdout(QString data) {
    Stdout.append(data);
    modelStdout->setStringList(Stdout);
}

