#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QAction *openAction = new QAction(tr("&open"),this);
    QIcon icon(":/myimage/image/7KH2W~RDU{DPSI]I3)IK4[Q.jpg");
    openAction->setShortcut(QKeySequence(tr("Ctrl+o")));
    ui->menu_F->addAction(openAction);

    QMenu *menu_E = ui->menuBar->addMenu(tr("编辑(&E)"));
    QAction *findAction = new QAction(tr("&find"),this);
    findAction->setShortcut(QKeySequence(tr("Ctrl+f")));
    menu_E->addAction(findAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
