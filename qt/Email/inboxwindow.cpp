#include "inboxwindow.h"
#include "ui_inboxwindow.h"

InboxWindow::InboxWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InboxWindow)
{
    ui->setupUi(this);
}

InboxWindow::~InboxWindow()
{
    delete ui;
}
