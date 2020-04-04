#include "email.h"
#include "ui_email.h"
#include "unistd.h"

Email::Email(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Email)
{
    ui->setupUi(this);
}

Email::~Email()
{
    delete ui;
}

void Email::on_SendButton_clicked()
{
    ui->label->setText("Email Sent!");
    //sleep(100);
    //TODO: Send email code
    //this->close();
}

void Email::on_SaveDraftButton_clicked()
{
    ui->label->setText("Draft Saved!");
    //sleep(100);
    //TODO: Save draft code
    //this->close();
}
