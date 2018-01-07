#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>

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
    QPoint lastpoint;
    QPoint endpoint;

    qreal scale;
    QPushButton *button;

private slots:
    void zoomIn();

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

};

#endif // DIALOG_H
