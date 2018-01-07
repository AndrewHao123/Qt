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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_left;
    QPushButton *pushButton_up;
    QPushButton *pushButton_right;
    QPushButton *pushButton_down;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(387, 273);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(9, 71, 28, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myicon/actions/gtk-go-back-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_left->setIcon(icon);
        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(197, 25, 28, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myicon/actions/go-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon1);
        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(197, 117, 28, 24));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myicon/actions/gtk-go-forward-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_right->setIcon(icon2);
        pushButton_down = new QPushButton(centralWidget);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(197, 163, 28, 24));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myicon/actions/gtk-go-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 387, 23));
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
        pushButton_left->setText(QString());
        pushButton_up->setText(QString());
        pushButton_right->setText(QString());
        pushButton_down->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
