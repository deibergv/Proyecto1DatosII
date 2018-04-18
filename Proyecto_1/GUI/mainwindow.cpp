#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QStandardItemModel"

#include <QStringListModel>

/*
 * Inicializacion de listas usadas para mostrar datos
 */
QStringListModel *modelStdout = new QStringListModel();
QStringList Stdout;
QStringListModel *modelAppLog = new QStringListModel();
QStringList AppLog;
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
    ui->RAMtableView->setModel(modelRAM);
    ui->RAMtableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Llamado a Debugger
 */
void MainWindow::on_RunButton_clicked()
{
    QStandardItem *firstRow = new QStandardItem(QString("test1"));
    modelRAM->setItem(0,0,firstRow);

    //ui->RAMtableView->setModel(modelRAM);


    //llenado de lista Stdout
    Stdout.append(">>");
    modelStdout->setStringList(Stdout);
    ui->StdoutlistView->setModel(modelStdout);

    //llenado de lista AppLog
    AppLog.append("asd");
    AppLog.append("asd");
    AppLog.append("asd");
    AppLog.append("asd");
    modelAppLog->setStringList(AppLog);
    ui->AppLoglistView->setModel(modelAppLog);

    // Desactivacion y activacion de botones en IDE
    ui->RunButton->setEnabled(false);
    ui->StopButton->setEnabled(true);
    ui->StepButton->setEnabled(true);
}

void MainWindow::on_StepButton_clicked()
{
    // cada step del debugger
}

void MainWindow::on_StopButton_clicked()
{
    if(!ui->RunButton->isEnabled()){
        ui->RunButton->setEnabled(true);
        ui->StepButton->setEnabled(false);
        ui->StopButton->setEnabled(false);
        /*currentLine = 0;
        AppLog.append("Execution stopped");
        modelAppLog->setStringList(AppLog);*/
    }
}

/*
 * Limpieza de Application log
 */
void MainWindow::on_ClearButton_clicked()
{
    AppLog.clear();
    modelAppLog->setStringList(AppLog);
    ui->AppLoglistView->setModel(modelAppLog);
}

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

        QStandardItem *name =
                new QStandardItem(contents[i].toObject().value("Name").toString("no name"));
        fillcolumns.append(name);

        QVariant val = contents[i].toObject().value("Value").toVariant();
        QString s = QString::fromStdString(val.toString().toStdString());
        QStandardItem* value =
                new QStandardItem(s);
        fillcolumns.append(value);

        int ref = contents[i].toObject().value("References").toInt(0);
        QString ss = QString::fromStdString(std::to_string(ref));
        QStandardItem *references =
                new QStandardItem(ss);
        fillcolumns.append(references);
        modelRAM->appendRow(column);
    }*/
}
