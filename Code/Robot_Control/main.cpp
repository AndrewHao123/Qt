#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"

#include "clientwidget.h"
#include "serverwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;

    ServerWidget w2;
    w2.show();

    ClientWidget w3;
    w3.show();

//    LoginDialog dlg;
//    if(dlg.exec() == QDialog::Accepted)
//    {
//        w.show();
//        return a.exec();
//    }

//    else
    a.exec();
        return 0;
}
