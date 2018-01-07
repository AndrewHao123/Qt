#include "dialog.h"
#include "ui_dialog.h"

#include <QPainter>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //窗口大小设置为600*500
    resize(800, 800);
    //画布大小为200*200,背景为白色
    pix = QPixmap(400, 400);
    pix.fill(Qt::white);

    //设置初始放大倍数为1，即不放大
    scale = 1;
    //新建按钮对象
    button = new QPushButton(this);
    //设置按钮显示文本
    button->setText(tr("zoomIn"));
    //设置按钮放置位置

    button->move(500, 450);
    //对按钮的单机事件和其槽函数进行关联
    connect(button, &QPushButton::clicked, this, &Dialog::zoomIn);

    isDrawing = false;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::zoomIn()
{
    scale *=2;
    update();
}

void Dialog::paintEvent(QPaintEvent *)
{
    /*
    QPainter pp(&pix);
    //根据鼠标指针前后两个位置绘制直线
    pp.drawLine(lastPoint, endPoint);
    //让前一个坐标值等于后一个坐标值，
    //这样就能实现画出连续的线
    lastPoint = endPoint;
    QPainter painter(this);
    painter.drawPixmap(0, 0, pix);
    */
    /*
    QPainter pp(&pix);
    pp.drawLine(lastPoint, endPoint);
    lastPoint = endPoint;
    QPainter painter(this);
    //进行放大操作
    painter.scale(scale, scale);
    painter.drawPixmap(0, 0, pix);
    */
    /*
    QPainter pp(&pix);
    pp.drawLine(lastPoint/scale, endPoint/scale);
    lastPoint = endPoint;
    QPainter painter(this);
    painter.scale(scale, scale);
    painter.drawPixmap(0, 0, pix);
    */
    /*
    QPainter pp(&pix);
    pp.scale(scale, scale);
    pp.drawLine(lastPoint, endPoint);
    lastPoint = endPoint;
    QPainter painter(this);
    painter.drawPixmap(0, 0, pix);
    */
    /*
    if(scale!=1)//如果进行放大操作
    {
        //临时画布，大小变化了scale倍
        QPixmap copyPix(pix.size()*scale);
        QPainter pter(&copyPix);
        pter.scale(scale, scale);
        //将以前画布上的内容复制到现在的画布上
        pter.drawPixmap(0, 0, pix);
        //将放大后的内容再复制回原来的画布上
        pix = copyPix;
        //让scale重新置1
        scale = 1;

    }

    QPainter pp(&pix);
    pp.scale(scale, scale);
    pp.drawLine(lastPoint/scale, endPoint/scale);
    lastPoint = endPoint;
    QPainter painter(this);
    painter.drawPixmap(0, 0, pix);
    */
    /*
    QPainter painter(this);
    int x, y, w, h;
    x = lastPoint.x();
    y = lastPoint.y();
    w = endPoint.x() - x;
    h = endPoint.y() - y;
    painter.drawRect(x, y, w, h);
    */
    int x, y, w, h;
    x = lastPoint.x();
    y = lastPoint.y();
    w = endPoint.x()-x;
    h = endPoint.y()-y;
    //QPainter pp(&pix);
    //pp.drawRect(x, y, w, h);
    QPainter painter(this);

    if(isDrawing) //如果正在绘图，就在辅助画布上绘制
    {
        //将以前pix中的内容复制到tempPix中，保证以前的内容不消失
        tempPix = pix;
        QPainter pp(&tempPix);
        pp.drawRect(x, y, w, h);
        painter.drawPixmap(0, 0, tempPix);

    }
    else
    {
       QPainter pp(&pix);
       pp.drawRect(x, y, w, h);
       painter.drawPixmap(0, 0, pix);
    }

    //painter.drawPixmap(0, 0, pix);
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    //鼠标左键按下
    if(event->button() == Qt::LeftButton)
        lastPoint = event->pos();
    //endPoint = lastPoint;
        isDrawing = true;  //正在绘图
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    //鼠标左键按下的同时移动鼠标
    if(event->buttons() & Qt::LeftButton)
    {
        endPoint = event->pos();
        update(); //进行绘制
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) //鼠标左键释放
    {
        endPoint = event->pos();
        isDrawing = false;                  //结束绘图
        update();
    }
}


