#include "inboxwindow.h"
#include "ui_inboxwindow.h"
#include "email.h"
#include "QListWidgetItem"
#include "QListWidget"
#include <QMessageBox>
#include "qmessagebox.h"
#include "QPlainTextEdit"
#include "QDebug"
#include "QString"

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
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x53f3422... \nSubject Hello World!"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x53f3422... \nI'm not Spam"));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x932h23h \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"hello.world.eth \nHello team I created.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x23h233r... \nCongratulations.."));
    ui->InboxListWidget->addItem(new QListWidgetItem(QIcon(":q/resources/img/email.png"),"0x23h233r... \nBreaking News.."));
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



void InboxWindow::on_pushButton_2_clicked()
{
    QString testmessage = "Dear Customer,"
            "\n"
            "\n"

            "We regret to inform you that your account has been restricted. To continue using our services"
            "please download the file attached to this email and update your login information."
                          "\n"
                          "\n"

            "GlobalPaymentsInc,";





    ui->plainTextEdit->document()->setPlainText(testmessage);

}

void InboxWindow::on_plainTextEdit_textChanged()
{

}

void InboxWindow::on_InboxListWidget_itemClicked(QListWidgetItem *item)
{
    QString message0 = "Dear Customer,"
            "\n"
            "\n"

            "We regret to inform you that your account has been restricted. To continue using our services"
            "please download the file attached to this email and update your login information."
                          "\n"
                          "\n"

            "GlobalPaymentsInc,";


QString message1 = "Hello world email test";
QString message2 = "libpng warning: iCCP: known incorrect sRGB profile";
QString message3 = "QMetaObject::connectSlotsByName: No matching signal for on_pushButton_clicked()";
QString message4 = "libpng warning: iCCP: known incorrect sRGB profile";
QString message5 = "Another test email";


if (ui->InboxListWidget->item(0) == item) {
    ui->plainTextEdit->document()->setPlainText(message0);
    }

if (ui->InboxListWidget->item(1) == item) {
    ui->plainTextEdit->document()->setPlainText(message1);
    }
if (ui->InboxListWidget->item(2) == item) {
    ui->plainTextEdit->document()->setPlainText(message2);
    }
if (ui->InboxListWidget->item(3) == item) {
    ui->plainTextEdit->document()->setPlainText(message3);
    }
if (ui->InboxListWidget->item(4) == item) {
    ui->plainTextEdit->document()->setPlainText(message4);
    }
if (ui->InboxListWidget->item(5) == item) {
    ui->plainTextEdit->document()->setPlainText(message5);
    }
}
