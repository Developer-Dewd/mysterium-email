#include "inbox.h"
#include "ui_inbox.h"
#include "email.h"

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

void Inbox::on_pushButton_clicked()
{
    Email emailDialog;
    emailDialog.setModal(true);
    emailDialog.exec();
}
