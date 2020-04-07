#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inbox.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//Opens the window
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(load_app()));
    timer->start(5000);
}

MainWindow::~MainWindow()
{
    delete ui; //Memory managment, destructor deletes widget object once finished
}


void MainWindow::on_pushButton_clicked()
{
    //this->setVisible(false);
    this->close();
    Inbox inboxDialog;
    inboxDialog.setModal(true);
    inboxDialog.exec();
}

void MainWindow::load_app()
{
    //TODO:SYNC with Mysterium
    qDebug() << "Loading";
    this->close();
    Inbox inboxDialog;
    inboxDialog.setModal(true);
    inboxDialog.exec();
}

