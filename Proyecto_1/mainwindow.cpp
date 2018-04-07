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

    // Llenado de tabla RAMview
    modelRAM->setHorizontalHeaderItem(0, new QStandardItem(QString("ColumnNameTEST")));        // titulo de columna
    modelRAM->setHorizontalHeaderItem(1, new QStandardItem(QString("ColumnNameTEST2")));        // titulo de columna

    QStandardItem *firstRow = new QStandardItem(QString("test1"));
    modelRAM->setItem(0,0,firstRow);

    QStandardItem *firstRow1 = new QStandardItem(QString("test2"));
    modelRAM->setItem(1,0,firstRow1);

    ui->RAMtableView->setModel(modelRAM);


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
