#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
    ui->InboxListWidget->addItem("@0x53f3422 \nSubject Hello World!");
}

App::~App()
{
    delete ui;
}
