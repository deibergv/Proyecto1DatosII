#define LOGURU_IMPLEMENTATION 1
#include "GUI/mainwindow.h"
#include "loguru.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    loguru::init(argc, argv);
    loguru::add_file("C_IDE_log.log", loguru::Truncate, loguru::Verbosity_INFO);
    LOG_F(INFO, "IDE started");
    QApplication a(argc, argv);
    MainWindow window;
    window.setWindowTitle("C! - IDE");
    window.show();

    return a.exec();
}