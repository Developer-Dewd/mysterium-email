#include "app.h"
#include "ui_app.h"
#include "QListWidgetItem"
#include "QListWidget"

App::App(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);

    //Populate the list view with
    foreach(QString reqs, reqlist.get()){
       ui->InboxListWidget->addItem(reqs.getURLPath());
    }

    //Placeholders
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x53f3422 \nSubject Hello World!"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x53f3422 \nSubject Hello World!"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x932h23h \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@hello.world.eth \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x23h233r \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x23h233r \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@hello.world.eth \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"@0x23h233r \nHello team I created.."));
}

App::~App()
{
    delete ui;
}
