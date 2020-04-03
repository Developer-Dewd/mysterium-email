#include "inbox.h"
#include "ui_inbox.h"

Inbox::Inbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inbox)
{
    ui->setupUi(this);
}

Inbox::~Inbox()
{
    delete ui;
}
