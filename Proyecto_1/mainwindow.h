//
// Created by deiber on 3/28/18.
//

#ifndef PROYECTO_1_MAINWINDOW_H
#define PROYECTO_1_MAINWINDOW_H

#include <QMainWindow>

#include "codeeditor.h"
#include "highlighter.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_RunButton_clicked();
    void on_ClearButton_clicked();

private:
    Ui::MainWindow *ui;
    Highlighter *highlighter;
};

#endif //PROYECTO_1_MAINWINDOW_H
