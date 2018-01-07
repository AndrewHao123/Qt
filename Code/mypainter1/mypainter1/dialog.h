#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>

#include <QPushButton>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

    QPixmap pix;
    QPoint lastPoint;
    QPoint endPoint;

    qreal scale;
    QPushButton *button;

    QPixmap tempPix; //辅助画布
    bool isDrawing;  //标志是否正在绘图

private slots:
    void zoomIn();


protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
};

#endif // DIALOG_H
