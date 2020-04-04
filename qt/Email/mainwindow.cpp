#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inbox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//Opens the window
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

