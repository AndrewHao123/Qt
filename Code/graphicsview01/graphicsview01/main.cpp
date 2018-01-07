#include <QtWidgets>

//QT += qml quick network multimedia widgets

#include <myitem.h>

int main(int argc, char* argv[])
{

    QApplication app(argc, argv);
    //设置随机数初值
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

    //场景
    QGraphicsScene *scene = new QGraphicsScene;
    //矩形项
    //QGraphicsRectItem *item = new QGraphicsRectItem(100, 100, 50, 50);
    for(int i = 0;i<5;i++) //在不同位置新建5个圆形
    {
        MyItem *item = new MyItem;
        item->setPos(i*100+20, 100);
        scene->addItem(item);

    }
    RectItem *rect = new RectItem;//新建矩形
    rect->setPos(100, 200);
    //MyItem *item = new MyItem;
    //项添矩形
    scene->addItem(rect);
    //视图
    QGraphicsView *view = new QGraphicsView;
    //视图关联场景
    view->setScene(scene);
    //设置视图大小
    view->resize(800, 600);
    //显示视图
    view->show();

    return app.exec();

}
