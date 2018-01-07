#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsItem>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
                const QStyleOptionGraphicsItem *option,
                QWidget *widget);
    QPainterPath shape() const;


protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void advance(int phase);
};

#endif // MYITEM_H
