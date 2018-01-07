#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QDialog>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton *btn = new QPushButton(this);
    QLineEdit *le = new QLineEdit(this);
    QGridLayout *layout = new QGridLayout;

    layout->addWidget(btn, 0, 0, 1, 1);
    layout->addWidget(le, 0, 1, 1, 2);
    layout->addWidget(ui->textEdit, 1, 0, 1, 3 );
    ui->centralWidget->setLayout(layout);

    //初始化文件为未保存状态
    isUntitled = true;
    //初始化文件名为”未命名.txt“
    curFile = tr("未命名.txt");
    //初始化窗口标题为文件名
    setWindowTitle(curFile);

    findDlg = new QDialog(this);
    findDlg->setWindowTitle(tr("查找"));
    findLineEdit = new QLineEdit(findDlg);
    QPushButton *btn1 = new QPushButton(tr("查找下一个"), findDlg);
    QVBoxLayout *layout1 = new QVBoxLayout(findDlg);
    layout1->addWidget(findLineEdit);
    layout1->addWidget(btn1);
    connect(btn1, &QPushButton::clicked, this, &MainWindow::showFindText);

    //ui->statusBar->showMessage(tr("欢迎访问Qt开源社区！"), 5000);
    statusLabel = new QLabel;
    statusLabel->setMinimumSize(150, 20);//设置标签最小大小
    statusLabel->setFrameShape(QFrame::StyledPanel);//设置标签形状
    statusLabel->setFrameShadow(QFrame::Raised); //设置标签阴影
    ui->statusBar->addWidget(statusLabel);
    statusLabel->setText(tr("欢迎访问Qt开源社区！"));

    QLabel *permanent = new QLabel;
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText(
                tr("<a href=\"http://www.yafeilinux.com\">yafeilinux.com</a>"));
    permanent->setTextFormat(Qt::RichText);
    permanent->setOpenExternalLinks(true);
    ui->statusBar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()
{
    if (maybeSave())
    {
        isUntitled = true;
        curFile = tr("未命名.txt");
        setWindowTitle(curFile);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);
    }
}

bool MainWindow::maybeSave()
{
    //如果文档被更改了
    if (ui->textEdit->document()->isModified())
    {
        //自定义一个警告对话框
        QMessageBox box;
        box.setWindowTitle(tr("警告"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile + tr("尚未保存，是否保存？"));
        QPushButton *yesBtn = box.addButton(tr("是（&Y）"),
                                            QMessageBox::YesRole);
        box.addButton(tr("否（&N）"), QMessageBox::NoRole);
        QPushButton *cancelBut = box.addButton(tr("取消"),
                                               QMessageBox::RejectRole);
        box.exec();
        if (box.clickedButton() == yesBtn)
            return save();
        else if (box.clickedButton() == cancelBut)
            return false;
    }
    //如果文档没有被更改，则直接返回true
    return true;
}

bool MainWindow::save()
{
    if (isUntitled)
    {
        return saveAs();
    }
    else
    {
        return saveFile(curFile);
    }
}

bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("另存为"), curFile);
    if (fileName.isEmpty())
        return false;
    return saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        //%1和%2分别对应后面arg两个参数，/n起换行的作用
        QMessageBox::warning(this, tr("多文档编辑器"),
                             tr("无法写入文件 %1：/n %2")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    //鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out << ui->textEdit->toPlainText();

    //鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
    isUntitled = false;
    //获取文件的标准路径
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;

}

bool MainWindow::loadFile(const QString &fileName)
{
    QFile file(fileName); //新建QFile对象
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("多文档编辑器"),
                             tr("无法读取文件 %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
        return false; //只读方式打开文件，出错则提示，并返回false
    }
    QTextStream in(&file);//新建文本流对象
    QApplication::setOverrideCursor(Qt::WaitCursor);

    //读取文件的全部文本内容，并添加到编辑器中
    ui->textEdit->setPlainText(in.readAll());
    QApplication::restoreOverrideCursor();

    //设置当前文件
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

void MainWindow::on_action_New_triggered()
{
    newFile();
}

void MainWindow::on_action_Save_triggered()
{
    save();
}

void MainWindow::on_action_SaveAs_triggered()
{
    saveAs();
}

void MainWindow::on_action_Open_triggered()
{
    if (maybeSave())
    {
        QString fileName = QFileDialog::getOpenFileName(this);
        //如果文件名为空，则加载文件
        if (!fileName.isEmpty())
        {
            loadFile(fileName);
            ui->textEdit->setVisible(true);
        }
    }
}

void MainWindow::on_action_Close_triggered()
{
    if (maybeSave())
    {
        ui->textEdit->setVisible(false);
    }
}


//退出动作
void MainWindow::on_action_Exit_triggered()
{
    //先执行关闭操作，再退出程序
    //qApp是指向应用程序的全局指针
    on_action_Close_triggered();
    qApp->quit();
}


//撤销动作
void MainWindow::on_action_Undo_triggered()
{
    ui->textEdit->undo();
}

//剪切动作
void MainWindow::on_action_Cut_triggered()
{
    ui->textEdit->cut();
}

//复制动作
void MainWindow::on_action_Copy_triggered()
{
    ui->textEdit->copy();
}

//粘贴动作
void MainWindow::on_action_Paste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::showFindText()
{
    QString str = findLineEdit->text();
    if(!ui->textEdit->find(str, QTextDocument::FindBackward))
    {
         QMessageBox::warning(this, tr("查找"),
                              tr("找不到%1").arg(str));
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //如果maybeSave()函数返回true,则关闭程序
    if (maybeSave())
    {
        event->accept();
    }
    else
    {
        //否则忽略该事件
        event->ignore();
    }
}

void MainWindow::on_action_Find_triggered()
{
    findDlg->show();
}
