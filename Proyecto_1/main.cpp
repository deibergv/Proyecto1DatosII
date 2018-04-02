
#include <iostream>
#include <QtWidgets/QInputDialog>

using namespace std;

#include "QApplication"
#include "QtWidgets/QLabel"
#include "QtWidgets/QPushButton"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}