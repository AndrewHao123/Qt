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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_IP;
    QLabel *label_2;
    QLineEdit *lineEdit_Port;
    QPushButton *pushButton_Connect;
    QTextEdit *textEdit_Recv;
    QTextEdit *textEdit_Send;
    QPushButton *pushButton_Send;
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(centralWidget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        gridLayout->addWidget(lineEdit_IP, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        gridLayout->addWidget(lineEdit_Port, 0, 3, 1, 1);

        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));

        gridLayout->addWidget(pushButton_Connect, 0, 4, 1, 1);

        textEdit_Recv = new QTextEdit(centralWidget);
        textEdit_Recv->setObjectName(QStringLiteral("textEdit_Recv"));
        textEdit_Recv->setReadOnly(true);

        gridLayout->addWidget(textEdit_Recv, 1, 0, 1, 5);

        textEdit_Send = new QTextEdit(centralWidget);
        textEdit_Send->setObjectName(QStringLiteral("textEdit_Send"));

        gridLayout->addWidget(textEdit_Send, 2, 0, 1, 5);

        pushButton_Send = new QPushButton(centralWidget);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));

        gridLayout->addWidget(pushButton_Send, 3, 4, 1, 1);

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
        label->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", 0));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
