//
// Created by deiber on 3/28/18.
//

#ifndef PROYECTO_1_MAINWINDOW_H
#define PROYECTO_1_MAINWINDOW_H

#include <QMainWindow>

#include "codeeditor.h"
#include "highlighter.h"
#include "Parser/Parser.h"
#include <nlohmann/json.hpp>

namespace Ui {
    class MainWindow;
}
using json = nlohmann::json;

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_RunButton_clicked();
    void on_ClearButton_clicked();
    void on_StepButton_clicked();
    void on_StopButton_clicked();
    void UpdateLogView();
    void UpdateRamView();
    void stdout(QString data);

private:
    json jsonList;
    Parser *parser = new Parser();
    Ui::MainWindow *ui;
    Highlighter *highlighter;
};

#endif //PROYECTO_1_MAINWINDOW_H
