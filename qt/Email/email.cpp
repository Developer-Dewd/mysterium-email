#include "email.h"
#include "ui_email.h"
#include "unistd.h"
#include <QMessageBox>
#include "qmessagebox.h"
#include "QDebug"
#include "qpushbutton.h"
#include <QPushButton>
#include <iostream>
#include <string>

using std::string;

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
    //string testmsg = "Are you ready to send you email? \nsize: 47KB cost: 00.34 MYST";
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Save Draft", "Are you ready to send you email? \nSIZE: 47KB COST: 00.34 MYST", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        //TODO: Save draft code, Mysterium proxy
        ui->label->setText("Draft Saved!");
    }else{
        qDebug() << "Save Draft Cancelled, No was clicked";
    }
    //ui->label->setText("Email Sent!");
    //TODO: Send email code
    //this->close();
}

void Email::on_SaveDraftButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Save Draft", "Do you really want to save draft?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        //TODO: Save draft code, Mysterium proxy
        ui->label->setText("Draft Saved!");
    }else{
        qDebug() << "Save Draft Cancelled, No was clicked";
    }

}
