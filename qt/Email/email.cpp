#include "email.h"
#include "ui_email.h"

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
