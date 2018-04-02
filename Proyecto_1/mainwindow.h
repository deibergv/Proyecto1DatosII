//
// Created by deiber on 3/28/18.
//

#ifndef PROYECTO_1_MAINWINDOW_H
#define PROYECTO_1_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //QString TipoDeDato();

private slots:

    //void on_InsertarInicio_clicked();

private:
    Ui::MainWindow *ui;
};

#endif //PROYECTO_1_MAINWINDOW_H
