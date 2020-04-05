#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
    ui->InboxListWidget->addItem("@0x53f3422 \nSubject Hello World!");
    ui->InboxListWidget->addItem("@0x932h23h \nHello team I created..");
    ui->InboxListWidget->addItem("@hello.world.eth \nHello team I created..");
    ui->InboxListWidget->addItem("@0x23h233r \nHello team I created..");
    ui->InboxListWidget->addItem("@0x23h233r \nHello team I created..");
    ui->InboxListWidget->addItem("@hello.world.eth \nHello team I created..");
    ui->InboxListWidget->addItem("@0x23h233r \nHello team I created..");
}

App::~App()
{
    delete ui;
}
