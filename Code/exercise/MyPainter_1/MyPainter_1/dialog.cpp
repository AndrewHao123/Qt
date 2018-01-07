#include "dialog.h"
#include "ui_dialog.h"

#include <QPixmap>
#include <QPainter>
#include <QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    resize(1000, 800);
    pix = QPixmap(500, 500);
    pix.fill(Qt::white);

    scale = 1;
    button = new QPushButton(this);
    button->setText(tr("zoomIn"));
    button->move(500, 500);
    connect(button , &QPushButton::clicked, this, &Dialog::zoomIn);


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
    pp.drawLine(lastpoint, endpoint);
    lastpoint = endpoint;
    QPainter painter(this);
    painter.drawPixmap(0, 0, pix);
    */
    if(scale != 1)
    {
        QPixmap copyPix(pix.size()*scale);
        QPainter pter(&copyPix);
        pter.scale(scale, scale);
        pter.drawPixmap(0, 0, pix);
        pix = copyPix;
        scale = 1;
    }

    QPainter pp(&pix);
    pp.scale(scale, scale);
    pp.drawLine(lastpoint, endpoint);
    lastpoint = endpoint;
    QPainter painter(this);
    painter.drawPixmap(0, 0, pix);


}

void Dialog::mousePressEvent(QMouseEvent *event)
{
   if(event->button() == Qt::LeftButton)
       lastpoint = event->pos();
   endpoint = lastpoint;
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        endpoint = event->pos();
        update();
    }

}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        endpoint = event->pos();
        update();
    }

}



