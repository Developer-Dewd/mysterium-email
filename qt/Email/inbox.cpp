#include "inbox.h"
#include "ui_inbox.h"
#include "email.h"
#include "app.h"
#include "inboxwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "QToolBar"
#include "QDesktopServices"
#include "QString"
#include "QUrl"
#include "recover.h"

Inbox::Inbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inbox)
{
    ui->setupUi(this);
    //QVBoxLayout *mainLayout = new QVBoxLayout(this);
    //QToolBar *menubar = new QToolBar();
    //mainLayout->addWidget(menubar);
    //slljd
    //QAction *action1 = new QAction("Add",menubar);
    //parent->layout()->setMenuBar(menubar);

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

    if(walletid == "mysteriumuser.eth" && password == "1234"){
        //QMessageBox::information(this, "Login","CORRECT");
        InboxWindow *inbox = new InboxWindow();
        inbox->show();
        this->close();
//        App appDialog;
//        appDialog.setModal(true);
//        appDialog.exec();
        qDebug() << walletid;
        qDebug() << password;
    }else{
        QMessageBox::information(this, "Login","WRONG walletid or password");
        qDebug() << walletid;
        qDebug() << password;
    }

}


void Inbox::on_CreateAccountButton_clicked()
{
    QString link = "https://wallet.mysterium.network/instructions/wallet";
    QDesktopServices::openUrl(QUrl(link));
}

void Inbox::on_SeedPhraseButton_clicked()
{
    Recover seedPhrase;
    seedPhrase.setModal(true);
    seedPhrase.exec();
}
