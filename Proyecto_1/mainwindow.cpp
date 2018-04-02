//
// Created by deiber on 3/28/18.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QInputDialog>
#include <iostream>
#include <QtWidgets/QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//
/*void MainWindow::on_Inicio_clicked()
{
    if (option == "Int") {
        int i = QInputDialog::getInt(this, tr("Insertar al Inicio:"),
                                     tr("Numero que desea insertar:"), 0, 0, 100000, 1);
        lista.add_head(i);
        ListaDatos = lista.printList();
    } else if (option == "String") {
        QString text = QInputDialog::getMultiLineText(this, tr("Insertar al Inicio:"),
                                                      tr("Dato que desea insertar:"), "");
        listString.add_head(text);
        ListaDatos = lista.printListString();
    }
    n_nodes += 1;
    ui->Text->setText(ListaDatos);
    ui->Text->adjustSize();
}*/

