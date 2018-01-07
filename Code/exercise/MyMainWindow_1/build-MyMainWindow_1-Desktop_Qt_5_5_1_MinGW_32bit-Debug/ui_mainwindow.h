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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Close;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Exit;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/actions/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/actions/actions/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/actions/actions/gtk-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon2);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/actions/actions/go-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName(QStringLiteral("action_SaveAs"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/actions/actions/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAs->setIcon(icon4);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/actions/actions/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(9, 9, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menu_F->addAction(action_New);
        menu_F->addAction(action_Open);
        menu_F->addAction(action_Close);
        menu_F->addAction(action_Save);
        menu_F->addAction(action_SaveAs);
        menu_F->addAction(action_Exit);
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Close);
        mainToolBar->addAction(action_Save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_SaveAs);
        mainToolBar->addAction(action_Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_New->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\357\274\210&N\357\274\211", 0));
        action_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\357\274\210&O\357\274\211", 0));
        action_Close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\357\274\210&C\357\274\211", 0));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\357\274\210&S\357\274\211", 0));
        action_SaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272\357\274\210&A\357\274\211", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\357\274\210&X\357\274\211", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
