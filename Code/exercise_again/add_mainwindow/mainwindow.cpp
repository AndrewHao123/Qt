#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建新的动作
    QAction *openAction = new QAction(tr("&Open"), this);
    //添加图标
    //QIcon icon(":/myimages/image/timg1.png");
    //设置快捷键
    openAction->setShortcut(QKeySequence(tr("Ctrl+o")));
    //在文件菜单中设置新的打开动作
    ui->menu_F->addAction(openAction);

    //创建新的编辑菜单
    QMenu *menu_E = ui->menuBar->addMenu(tr("编辑（&E）"));
    QAction *findAction = new QAction(tr("&Find"),this);
    //QIcon icon2(":/myimages/images/image.png");
    //findAction->setIcon(icon2);
    findAction->setShortcut(QKeySequence(tr("Ctrl+F")));
    menu_E->addAction(findAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
