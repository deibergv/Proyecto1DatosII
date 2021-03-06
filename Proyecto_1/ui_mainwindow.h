/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RunButton;
    CodeEditor *CodeEditorPlainText;
    QListView *StdoutlistView;
    QLabel *RamLabel;
    QTableView *RAMtableView;
    QPushButton *ClearButton;
    QLabel *AppLogLabel;
    QPushButton *StepButton;
    QPushButton *StopButton;
    QTextBrowser *AppLogView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1251, 676);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RunButton = new QPushButton(centralWidget);
        RunButton->setObjectName(QStringLiteral("RunButton"));
        RunButton->setGeometry(QRect(10, 10, 51, 16));
        CodeEditorPlainText = new CodeEditor(centralWidget);
        CodeEditorPlainText->setObjectName(QStringLiteral("CodeEditorPlainText"));
        CodeEditorPlainText->setGeometry(QRect(10, 30, 821, 361));
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(11);
        CodeEditorPlainText->setFont(font);
        StdoutlistView = new QListView(centralWidget);
        StdoutlistView->setObjectName(QStringLiteral("StdoutlistView"));
        StdoutlistView->setGeometry(QRect(10, 400, 821, 111));
        RamLabel = new QLabel(centralWidget);
        RamLabel->setObjectName(QStringLiteral("RamLabel"));
        RamLabel->setGeometry(QRect(843, 10, 205, 19));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        RamLabel->setFont(font1);
        RAMtableView = new QTableView(centralWidget);
        RAMtableView->setObjectName(QStringLiteral("RAMtableView"));
        RAMtableView->setGeometry(QRect(840, 30, 402, 611));
        ClearButton = new QPushButton(centralWidget);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setEnabled(true);
        ClearButton->setGeometry(QRect(770, 520, 61, 25));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(231, 231, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(104, 104, 104, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(139, 139, 139, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ClearButton->setPalette(palette);
        ClearButton->setFont(font1);
        AppLogLabel = new QLabel(centralWidget);
        AppLogLabel->setObjectName(QStringLiteral("AppLogLabel"));
        AppLogLabel->setGeometry(QRect(10, 530, 201, 16));
        AppLogLabel->setFont(font1);
        StepButton = new QPushButton(centralWidget);
        StepButton->setObjectName(QStringLiteral("StepButton"));
        StepButton->setEnabled(false);
        StepButton->setGeometry(QRect(70, 10, 57, 16));
        StopButton = new QPushButton(centralWidget);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        StopButton->setEnabled(false);
        StopButton->setGeometry(QRect(130, 10, 51, 16));
        AppLogView = new QTextBrowser(centralWidget);
        AppLogView->setObjectName(QStringLiteral("AppLogView"));
        AppLogView->setGeometry(QRect(10, 550, 821, 91));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AppLogView->sizePolicy().hasHeightForWidth());
        AppLogView->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        RunButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        CodeEditorPlainText->setProperty("plainText", QVariant(QApplication::translate("MainWindow", "//\n"
"//	Created by Deiber and Kisung \n"
"//\n"
"int a = 5;\n"
"double b = 2.012;\n"
"char c = 'x';\n"
"long d = 10 \n"
"float e = 1.20;\n"
"", Q_NULLPTR)));
        RamLabel->setText(QApplication::translate("MainWindow", "RAM Live View", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        AppLogLabel->setText(QApplication::translate("MainWindow", "Application log", Q_NULLPTR));
        StepButton->setText(QApplication::translate("MainWindow", "Step ->", Q_NULLPTR));
        StopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        AppLogView->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
