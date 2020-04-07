#include "recover.h"
#include "ui_recover.h"

Recover::Recover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recover)
{
    ui->setupUi(this);
}

Recover::~Recover()
{
    delete ui;
}
