/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit_Port;
    QTextEdit *textEdit_Recv;
    QTextEdit *textEdit_Send;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_Listen;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 36, 16));
        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(51, 10, 133, 20));
        textEdit_Recv = new QTextEdit(centralWidget);
        textEdit_Recv->setObjectName(QStringLiteral("textEdit_Recv"));
        textEdit_Recv->setGeometry(QRect(9, 38, 382, 80));
        textEdit_Recv->setReadOnly(true);
        textEdit_Send = new QTextEdit(centralWidget);
        textEdit_Send->setObjectName(QStringLiteral("textEdit_Send"));
        textEdit_Send->setGeometry(QRect(9, 124, 382, 81));
        textEdit_Send->setReadOnly(false);
        pushButton_Send = new QPushButton(centralWidget);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(310, 210, 75, 23));
        pushButton_Listen = new QPushButton(centralWidget);
        pushButton_Listen->setObjectName(QStringLiteral("pushButton_Listen"));
        pushButton_Listen->setGeometry(QRect(190, 9, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", 0));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
        pushButton_Listen->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
