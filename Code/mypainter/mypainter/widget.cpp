#include "widget.h"
#include "ui_widget.h"

#include <QPainter>

#include <QFont>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    /*
    QPainter painter(this);
    QPen pen; //画笔
    pen.setColor(QColor(255, 0, 0));
    QBrush brush(QColor(0, 255, 0, 125)); //画刷
    painter.setPen(pen); //添加画笔
    painter.setBrush(brush);  //添加画刷
    painter.drawRect(50, 50, 200, 100); //绘制矩形
    */
    /*
    QPainter painter(this);
    QPen pen(Qt::DotLine);
    QBrush brush(Qt::blue);
    brush.setStyle(Qt::HorPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(50, 50, 200, 200);
    */
    /*
    QRectF rectangle(10.0, 20.0, 80.0, 60.0);//矩形
    int startAngle = 30 *16;  //起始角度
    int spanAngle = 120 *16;   //跨越度数

    QPainter painter(this);
    painter.drawArc(rectangle, startAngle, spanAngle);
    */
    /*
    //线性渐变
    QLinearGradient linearGradient(QPointF(40, 190),
                                   QPointF(70, 190));
    //插入颜色
    linearGradient.setColorAt(0, Qt::yellow);
    linearGradient.setColorAt(0.5, Qt::red);
    linearGradient.setColorAt(1, Qt::green);
    //指定渐变区域以外的区域的扩散方式
    linearGradient.setSpread(QGradient::RepeatSpread);
    //使用渐变作为画刷
    QPainter painter(this);
    painter.setBrush(linearGradient);
    painter.drawRect(100, 100, 90, 40);
    */
    /*
    //辐射渐变
    QRadialGradient radialGradient(QPointF(100, 190),
                                   50, QPointF(275, 200));
    radialGradient.setColorAt(0, QColor(255, 255, 100, 150));
    radialGradient.setColorAt(1, QColor(0, 0, 0, 50));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPointF(100, 200), 50, 50);
    */

    /*
    QPainter painter(this);
    //设置一个矩形
    QRectF rect(30, 50, 300, 200);
    //为了更直观地看到字体的位置，我们绘制出这个矩形
    painter.drawRect(rect);
    painter.setPen(QColor(Qt::red));
    //这里先让字体水平居中
    painter.drawText(rect, Qt::AlignHCenter, "yefeilinux");

    QFont font("宋体", 15, QFont::Bold, true);
    //设置下划线
    font.setUnderline(true);
    //设置上划线
    font.setOverline(true);
    //设置字母大小写
    font.setCapitalization(QFont::SmallCaps);
    //设置字符间的间距
    font.setLetterSpacing(QFont::AbsoluteSpacing, 10);

    //使用字体
    painter.setFont(font);
    painter.setPen(Qt::blue);
    painter.drawText(120, 80, tr("yafeilinux"));
    painter.translate(50, 50);
    painter.rotate(90);
    painter.drawText(0, 0, tr("helloqt"));
    */
    QPainterPath path;
    path.addEllipse(100, 100, 50, 50);
    path.lineTo(200, 200);
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setBrush(Qt::red);
    painter.drawPath(path);

    //复制图形
    QPainterPath path2;
    path2.addPath(path);
    path2.translate(100, 0);
    painter.drawPath(path2);


}
