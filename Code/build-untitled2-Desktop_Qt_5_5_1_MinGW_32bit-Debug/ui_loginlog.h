/********************************************************************************
** Form generated from reading UI file 'loginlog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINLOG_H
#define UI_LOGINLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginLog
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *LoginLog)
    {
        if (LoginLog->objectName().isEmpty())
            LoginLog->setObjectName(QStringLiteral("LoginLog"));
        LoginLog->resize(400, 300);
        pushButton = new QPushButton(LoginLog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 90, 91, 31));

        retranslateUi(LoginLog);
        QObject::connect(pushButton, SIGNAL(clicked()), LoginLog, SLOT(accept()));

        QMetaObject::connectSlotsByName(LoginLog);
    } // setupUi

    void retranslateUi(QDialog *LoginLog)
    {
        LoginLog->setWindowTitle(QApplication::translate("LoginLog", "Dialog", 0));
        pushButton->setText(QApplication::translate("LoginLog", "\347\231\273\345\275\225\345\210\260\344\270\273\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginLog: public Ui_LoginLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINLOG_H
