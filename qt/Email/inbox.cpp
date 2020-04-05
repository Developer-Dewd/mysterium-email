#include "inbox.h"
#include "ui_inbox.h"
#include "email.h"
#include "app.h"
#include "app.h"
#include "QMessageBox"
#include "QDebug"

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



void Inbox::on_LoginButton_clicked()
{
    QString walletid = ui->WalletIDLineEdit->text();
    QString password = ui->PasswordLineEdit->text();

    if(walletid == "test" && password == "test"){
        QMessageBox::information(this, "Login","CORRECT");
        this->close();
        App appDialog;
        appDialog.setModal(true);
        appDialog.exec();
        qDebug() << walletid;
        qDebug() << password;
    }else{
        QMessageBox::information(this, "Login","WRONG walletid or password");
        qDebug() << walletid;
        qDebug() << password;
    }

}

