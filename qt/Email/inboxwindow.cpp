#include "inboxwindow.h"
#include "ui_inboxwindow.h"
#include "email.h"
#include "QListWidgetItem"
#include "QListWidget"
#include <QMessageBox>
#include "qmessagebox.h"

InboxWindow::InboxWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InboxWindow)
{
    ui->setupUi(this);

    //Populate the list view with
//    foreach(QString reqs, reqlist.get()){
//       ui->InboxListWidget->addItem(reqs.getURLPath());
//    }

    //Placeholders
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"<b>0x53f3422...</b> \nSubject Hello World!"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x53f3422... \nSubject Hello World!"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x932h23h \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"hello.world.eth \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x23h233r... \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x23h233r... \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"hello.world.eth \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x23h233r... \nHello team I created.."));
}

InboxWindow::~InboxWindow()
{
    delete ui;
}

void InboxWindow::on_pushButton_clicked()
{
    Email emailDialog;
    emailDialog.setModal(true);
    emailDialog.exec();
}


