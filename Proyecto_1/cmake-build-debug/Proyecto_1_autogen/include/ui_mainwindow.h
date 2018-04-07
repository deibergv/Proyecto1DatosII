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
#include <QtWidgets/QWidget>
#include <codeeditor.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RunButton;
    CodeEditor *CodeEditorPlainText;
    QListView *StdoutlistView;
    QListView *AppLoglistView;
    QLabel *RamLabel;
    QTableView *RAMtableView;
    QPushButton *ClearButton;
    QLabel *AppLogLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1282, 802);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RunButton = new QPushButton(centralWidget);
        RunButton->setObjectName(QStringLiteral("RunButton"));
        RunButton->setGeometry(QRect(10, 10, 51, 16));
        CodeEditorPlainText = new CodeEditor(centralWidget);
        CodeEditorPlainText->setObjectName(QStringLiteral("CodeEditorPlainText"));
        CodeEditorPlainText->setGeometry(QRect(10, 30, 821, 481));
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(11);
        CodeEditorPlainText->setFont(font);
        StdoutlistView = new QListView(centralWidget);
        StdoutlistView->setObjectName(QStringLiteral("StdoutlistView"));
        StdoutlistView->setGeometry(QRect(10, 520, 821, 121));
        AppLoglistView = new QListView(centralWidget);
        AppLoglistView->setObjectName(QStringLiteral("AppLoglistView"));
        AppLoglistView->setGeometry(QRect(10, 680, 821, 91));
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
        RAMtableView->setGeometry(QRect(840, 30, 431, 741));
        ClearButton = new QPushButton(centralWidget);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setEnabled(true);
        ClearButton->setGeometry(QRect(770, 654, 61, 25));
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
        AppLogLabel->setGeometry(QRect(14, 662, 201, 16));
        AppLogLabel->setFont(font1);
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
        CodeEditorPlainText->setPlainText(QApplication::translate("MainWindow", "//\n"
"//	Created by Deiber \n"
"//\n"
"int a = 5;\n"
"double b = 2.0;\n"
"\"test\"\n"
"reference<tipo>\n"
"struct a;\n"
"", Q_NULLPTR));
        RamLabel->setText(QApplication::translate("MainWindow", "RAM Live View", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        AppLogLabel->setText(QApplication::translate("MainWindow", "Application log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
