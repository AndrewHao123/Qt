#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize( QSize( 400, 350 ));
    ui->pushButton_left->setEnabled(false);
    ui->pushButton_right->setEnabled(false);
    ui->pushButton_up->setEnabled(false);
    ui->pushButton_down->setEnabled(false);
    ui->pushButton_left->setGeometry(QRect(QPoint(140, 205), QSize(40, 40)));
    ui->pushButton_right->setGeometry(QRect(QPoint(220, 205), QSize(40, 40)));
    ui->pushButton_up->setGeometry(QRect(QPoint(180, 165), QSize(40, 40)));
    ui->pushButton_down->setGeometry(QRect(QPoint(180, 245), QSize(40, 40)));//设置位置和大小

//    ui->pushButton_down->resize(QSize(20, 20));   //重新设置大小
//    ui->pushButton_left->resize(QSize(20, 20));
//    ui->pushButton_right->resize(QSize(20, 20));
//    ui->pushButton_up->resize(QSize(20, 20));
    btn_shaft_1 = new QPushButton(this);
//    QPushButton *btn_shaft_2 = new QPushButton();
//    QPushButton *btn_shaft_3 = new QPushButton();
    //QObject::connect(btn_shaft_1, &QPushButton::clicked, ui->pushButton_left, &MainWindow::shaft_move);
    connect(btn_shaft_1, SIGNAL(&QPushButton::clicked), ui->pushButton_down, SLOT(MainWindow::shaft_move));
    //connect(ui->pushButton_left, SIGNAL(&QPushButton::clicked), )
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::shaft_move()
{
    ui->pushButton_left->setEnabled(true);
    ui->pushButton_right->setEnabled(true);
    ui->pushButton_up->setEnabled(true);
    ui->pushButton_down->setEnabled(true);

    //connect(ui->pushButton_left, SIGNAL(&QPushButton::clicked))


}
