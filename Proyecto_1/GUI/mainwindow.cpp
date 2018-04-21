#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QStandardItemModel"

#include <QStringListModel>
#include <iostream>
#include <loguru.h>
#include <QtWidgets>

/**
 * Inicializacion de listas usadas para mostrar datos
 */
QStringListModel *modelStdout = new QStringListModel();
QStringList Stdout;
QStandardItemModel *modelRAM = new QStandardItemModel();

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    highlighter = new Highlighter(ui->CodeEditorPlainText->document());

    // Creacion de columnas principales de tabla RAM View
    modelRAM->setHorizontalHeaderItem(0, new QStandardItem(QString("Direction"))); // titulos de las columnas
    modelRAM->setHorizontalHeaderItem(1, new QStandardItem(QString("Value")));
    modelRAM->setHorizontalHeaderItem(2, new QStandardItem(QString("Tag")));
    modelRAM->setHorizontalHeaderItem(3, new QStandardItem(QString("References")));
    ui->RAMtableView->setModel(modelRAM);   // Montaje de nombres de columnas
    ui->RAMtableView->setEditTriggers(QAbstractItemView::NoEditTriggers);   // bloqueo a edicion de tabla
    ui->StdoutlistView->setModel(modelStdout);
    ui->StdoutlistView->setEditTriggers(QAbstractItemView::NoEditTriggers); // bloqueo a edicion de Stdout
    UpdateLogView();    // iniciacion de muestra de datos del Log application
    ui->AppLogView->verticalScrollBar()->setValue(ui->AppLogView->verticalScrollBar()->maximum());
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

    //llenado de lista Stdout
    Stdout.append(">>");
    modelStdout->setStringList(Stdout);


    LOG_F(INFO, "Execution started");
    UpdateLogView();

    // Desactivacion y activacion de botones en IDE
    ui->RunButton->setEnabled(false);
    ui->StopButton->setEnabled(true);
    ui->StepButton->setEnabled(true);
}

/**
 * Boton encargado de dar los saltos en el codigo
 */
void MainWindow::on_StepButton_clicked()
{
    // cada step del debugger
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
        //currentLine = 0;
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
 * Llamado a parseo del codigo en el Editor
 * @return Json
 */
void MainWindow::ParseCode() {
    //UpdateLogView();
    /*parseCode(ui->CodeEditorPlainText->toPlainText().toStdString());
    return getJSON();*/
};

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

    /*QJsonDocument doc(json);
    QJsonArray contents = json["Contents"].toArray();*/

    /*for(int i = 0; i < contents.size(); ++i) {
        QJsonDocument d(contents[i].toObject());
        //std::cout << d.toJson(QJsonDocument::Compact).toStdString() << std::endl;

        QList<QStandardItem *> fillcolumns;

        QStandardItem *direction =
                new QStandardItem(contents[i].toObject().value("Direction").toString());
        fillcolumns.append(direction);

        QVariant val = contents[i].toObject().value("Value").toVariant();
        QString s = QString::fromStdString(val.toString().toStdString());
        QStandardItem* value =
                new QStandardItem(s);
        fillcolumns.append(value);

        QStandardItem *tag =
                new QStandardItem(contents[i].toObject().value("Tag").toString("no tag"));
        fillcolumns.append(tag);

        int ref = contents[i].toObject().value("References").toInt(0);
        QString ss = QString::fromStdString(std::to_string(ref));
        QStandardItem *references =
                new QStandardItem(ss);
        fillcolumns.append(references);

        modelRAM->appendRow(fillcolumns);
    }*/
}
