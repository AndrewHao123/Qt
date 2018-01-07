#include <QtWidgets>
#include "myitem.h"
#include <QDebug>

int main(int argc,char* argv[ ])
{
    QApplication app(argc,argv);

    QTimer timer;

    // 场景
    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsLineItem *line = new QGraphicsLineItem(0, 10, 300, 100);
    scene->addItem(line);
    // 矩形项
    MyItem *item = new MyItem;
    //qDebug() << item->shape();          //输出item的shape信息
    //qDebug() << item->boundingRect();  //输出item的boundingRect信息

    // 图形项添加到场景
    scene->addItem(item);
    // 视图
    QGraphicsView *view = new QGraphicsView;
    // 视图关联场景
    view->setScene(scene);
    // 显示视图
    view->show();

    QObject::connect(&timer, SIGNAL(timeout()), scene, SLOT(advance()));
    timer.start(2000);

    //图形项可获得焦点
    return app.exec();



}
