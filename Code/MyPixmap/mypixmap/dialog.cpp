#include "dialog.h"
#include "ui_dialog.h"

#include <QPainter>

#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *)
{

    /*
    QPainter painter(this);
    QPixmap pix;
    pix.load("../mypixmap/myimage/timg.jpg");
    painter.translate(100, 100);
    painter.drawPixmap(0, 0, 300, 200, pix);

    //获取以前图片的宽和高
    qreal width = pix.width();
    qreal height = pix.height();
    //将图片的宽和高都缩小，并且在给定的矩形内保持宽高的比值不变
    pix = pix.scaled(width*0.2, height*0.2,
                     Qt::KeepAspectRatio);
    painter.drawPixmap(90, 90, pix);

    //让图片的中心作为旋转的中心
    painter.translate(40, 50);
    painter.rotate(90); //顺时针旋转90度
    painter.translate(-100, -100); //使原点复原
    painter.drawPixmap(100, 100, 80, 100, pix);
    */
    /*
    QPainter painter(this);
    painter.setBrush(Qt::red);
    painter.drawRect(0, 0, 100, 100);
    painter.setBrush(Qt::yellow);
    painter.drawRect(-50, -50, 100, 100);
    */
    /*
    QPainter painter(this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(0, 0, 100, 100);
    //将点（100， 100）设为原点
    painter.translate(100, 100);
    painter.setBrush(Qt::red);
    painter.drawRect(0, 0, 50, 50);
    painter.translate(-100, -100);
    painter.drawLine(0, 0, 20, 20);
    */
    /*
    QPainter painter(this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(0, 0, 100, 100);
    painter.scale(2, 2); //放大两倍
    painter.setBrush(Qt::red);
    painter.drawRect(50, 50, 50, 50);
    */
    /*
    //扭曲
    QPainter painter(this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(0, 0, 50, 50);
    painter.shear(0, 2);//纵向扭曲变形
    painter.setBrush(Qt::red);
    painter.drawRect(50, 0, 50, 50);
    */
    /*
    //旋转
    QPainter painter(this);
    painter.drawLine(0, 0, 100, 0);
    //以原点为中心，顺时针旋转30度
    painter.rotate(30);
    painter.drawLine(0, 0, 100, 0);
    //反向旋转

    painter.rotate(-30);
    painter.translate(100, 100);
    painter.drawLine(0, 0, 100, 0);
    painter.rotate(30);
    painter.drawLine(0, 0, 100, 0);
    */
    /*
    QPainter painter(this);
    painter.save(); //保存坐标系状态
    painter.translate(100, 100);
    painter.drawLine(0, 0, 50, 50);
    painter.restore(); //恢复以前的坐标系状态
    painter.drawLine(0, 0, 50, 100);
    */
    /*
    QPainter painter(this);
    painter.drawRect(0, 0, 50, 50);
    painter.scale(1, 2);
    painter.drawRect(50, 50, 50, 50);
    */
    /*
    QPainter painter(this);
    painter.drawLine(0, 0, 100, 0);
    painter.rotate(45);
    painter.setPen(Qt::red);
    painter.drawLine(0, 0, 100, 0);
    */
    /*
    QPainter painter(this);
    QPixmap pix(200, 200);
    pix.fill(Qt::red);  //背景填充为红色
    painter.drawPixmap(0, 0, pix);
    */
    /*
    QPainter painter(this);
    QPixmap pix(200, 200);
    pix.fill(Qt::red); //背景填充为红色
    painter.drawPixmap(100, 100, pix);
    */
    /*
    QPainter painter(this);
    QPixmap pix(200, 200);
    pix.fill(Qt::red);
    //新建QPainter类对象，在pix上进行绘图
    QPainter pp(&pix);
    //在pix上的（0， 0）点和（50， 50）点之间绘制直线
    pp.drawLine(0, 0, 50, 50);
    painter.drawPixmap(100, 100, pix);
    */
    /*
    QPainter painter(this);
    QPixmap pix(200, 200);
    //放大前输出画布的大小
    qDebug() << pix.size();
    pix.fill(Qt::red);
    QPainter pp(&pix);
    //画布的坐标扩大2倍
    pp.scale(2, 2);
    //在画布上的（0， 0）点和（50， 50）点之间绘制直线
    pp.drawLine(0, 0, 50, 50);
    //放大后输出画布的大小
    qDebug() << pix.size();
    painter.drawPixmap(0, 0, pix);
    */
    QPainter painter(this);
    QPixmap pix(200, 200);
    qDebug() << pix.size();
    //窗口坐标扩大2倍
    painter.scale(2, 2);
    pix.fill(Qt::red);
    QPainter pp(&pix);
    pp.drawLine(0, 0, 50, 50);
    qDebug() << pix.size();
    painter.drawPixmap(0, 0, pix);


}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}
