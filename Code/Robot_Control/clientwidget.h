#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket> //通信套接字

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = 0);
    ~ClientWidget();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonSend_shaft_01_Left_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonSend_shaft_02_Left_clicked();

    void on_pushButtonSend_shaft_03_Left_clicked();

    void on_pushButtonSend_shaft_04_Left_clicked();

    void on_pushButtonSend_shaft_05_Left_clicked();

    void on_pushButtonSend_shaft_06_Left_clicked();

    void on_pushButtonSend_shaft_01_Right_clicked();

    void on_pushButtonSend_shaft_02_Right_clicked();

    void on_pushButtonSend_shaft_03_Right_clicked();

    void on_pushButtonSend_shaft_04_Right_clicked();

    void on_pushButtonSend_shaft_05_Right_clicked();

    void on_pushButtonSend_shaft_06_Right_clicked();

    void on_pushButtonReset_clicked();

    void on_spinBox_Speed_editingFinished();

    void on_pushButtonCrawl_clicked();

    void on_pushButtonPlace_clicked();

private:
    Ui::ClientWidget *ui;

    QTcpSocket *tcpSocket;//通信套接字
};

#endif // CLIENTWIDGET_H
