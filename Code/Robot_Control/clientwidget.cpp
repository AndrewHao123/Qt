#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QHostAddress>
#include <QPalette>


ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    setWindowTitle("Robot_Control");
    QPalette palette;
    palette.setBrush(QPalette::Background/*this->backgroundRole()*/,
                     QBrush(QPixmap(":/myicon/image/background.gif")));
    this->setPalette(palette);

//    QPainter painter(this);
//    QPixmap pix;
//    pix.load(":/myicon/image/background.gif");
//    painter.translate(100, 100);
//    painter.drawPixmap(0, 0, 400, 300, pix);

//    //获取以前图片的宽和高
//    qreal width = pix.width();
//    qreal height = pix.height();
//    //将图片的宽和高都缩小，并且在给定的矩形内保持宽高的比值不变
//    pix = pix.scaled(width*0.2, height*0.2,
//                     Qt::KeepAspectRatio);
//    painter.drawPixmap(90, 90, pix);


    tcpSocket = NULL;
    //分配空间，指定父对象
    tcpSocket = new QTcpSocket(this);

    connect(tcpSocket, &QTcpSocket::connected,
            [=]()
            {
                ui->textEditRead->setText("成功和服务器建立好连接");
            }
            );
    connect(tcpSocket, &QTcpSocket::readyRead,
            [=]()
            {
                //从通信套接字中取出内容(获取对方发送的内容)
                QByteArray array = tcpSocket->readAll();
                ui->textEditRead->append(array);
            }
            );
}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonConnect_clicked()
{
    //获取服务器ip和端口
    QString ip = ui->lineEditIP->text();
    quint16 port = ui->lineEditPort->text().toInt();

    //主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip), port);
}

void ClientWidget::on_pushButtonSend_shaft_01_Left_clicked()
{
    ui->pushButtonSend_shaft_01_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_01_Left->setAutoRepeatInterval(100);

    //ui->pushButtonSend_shaft_01_Left->setFlat(arg1==Qt::Checked);
    //获取编辑区内容
    //QString str = ui->textEditWrite->toPlainText();
    QString str = tr("0x11");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonClose_clicked()
{
    //主动和对方断开连接
    //tcpSocket->disconnectFromHost();
    tcpSocket->disconnected();
    tcpSocket->close();
}

void ClientWidget::on_pushButtonSend_shaft_02_Left_clicked()
{
    ui->pushButtonSend_shaft_02_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_02_Left->setAutoRepeatInterval(100);
    QString str = tr("0x12");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_03_Left_clicked()
{
    ui->pushButtonSend_shaft_03_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_03_Left->setAutoRepeatInterval(100);
    QString str = tr("0x13");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_04_Left_clicked()
{
    ui->pushButtonSend_shaft_04_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_04_Left->setAutoRepeatInterval(100);
    QString str = tr("0x14");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_05_Left_clicked()
{
    ui->pushButtonSend_shaft_05_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_05_Left->setAutoRepeatInterval(100);
    QString str = tr("0x15");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_06_Left_clicked()
{
    ui->pushButtonSend_shaft_06_Left->setAutoRepeat(true);
    ui->pushButtonSend_shaft_06_Left->setAutoRepeatInterval(100);
    QString str = tr("0x16");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_01_Right_clicked()
{
    ui->pushButtonSend_shaft_01_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_01_Right->setAutoRepeatInterval(100);
    QString str = tr("0x17");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_02_Right_clicked()
{
    ui->pushButtonSend_shaft_02_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_02_Right->setAutoRepeatInterval(100);
    QString str = tr("0x18");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_03_Right_clicked()
{
    ui->pushButtonSend_shaft_03_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_03_Right->setAutoRepeatInterval(100);
    QString str = tr("0x19");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_04_Right_clicked()
{
    ui->pushButtonSend_shaft_04_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_04_Right->setAutoRepeatInterval(100);
    QString str = tr("0x20");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_05_Right_clicked()
{
    ui->pushButtonSend_shaft_05_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_05_Right->setAutoRepeatInterval(100);
    QString str = tr("0x21");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonSend_shaft_06_Right_clicked()
{
    ui->pushButtonSend_shaft_06_Right->setAutoRepeat(true);
    ui->pushButtonSend_shaft_06_Right->setAutoRepeatInterval(100);
    QString str = tr("0x22");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonReset_clicked()
{
    QString str = tr("0x23");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_spinBox_Speed_editingFinished()
{
    int val = ui->spinBox_Speed->value();
    QString str = QString::number(val);
    tcpSocket->write( str.toUtf8().data() );

    //int *p = new int ;
//    p->setValue(val);
    //tcpSocket->write(p);
//    int 转 QString
//    int a=10;
//    QString b;
//    b=QString::number(a)
}

void ClientWidget::on_pushButtonCrawl_clicked()
{
    QString str = tr("0x24");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void ClientWidget::on_pushButtonPlace_clicked()
{
    QString str = tr("0x25");
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}
