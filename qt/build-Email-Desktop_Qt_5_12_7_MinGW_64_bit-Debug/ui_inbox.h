/********************************************************************************
** Form generated from reading UI file 'inbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOX_H
#define UI_INBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inbox
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *WalletIDLabel;
    QLineEdit *WalletIDLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PasswordLabel;
    QLineEdit *PasswordLineEdit;
    QPushButton *LoginButton;
    QPushButton *SeedPhraseButton;
    QFrame *line;
    QPushButton *CreateAccountButton;
    QWidget *page_2;

    void setupUi(QDialog *Inbox)
    {
        if (Inbox->objectName().isEmpty())
            Inbox->setObjectName(QString::fromUtf8("Inbox"));
        Inbox->resize(932, 622);
        stackedWidget = new QStackedWidget(Inbox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 921, 621));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 120, 321, 231));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        WalletIDLabel = new QLabel(groupBox);
        WalletIDLabel->setObjectName(QString::fromUtf8("WalletIDLabel"));

        horizontalLayout->addWidget(WalletIDLabel);

        WalletIDLineEdit = new QLineEdit(groupBox);
        WalletIDLineEdit->setObjectName(QString::fromUtf8("WalletIDLineEdit"));

        horizontalLayout->addWidget(WalletIDLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PasswordLabel = new QLabel(groupBox);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        horizontalLayout_2->addWidget(PasswordLabel);

        PasswordLineEdit = new QLineEdit(groupBox);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(PasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        LoginButton = new QPushButton(groupBox);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        verticalLayout->addWidget(LoginButton);

        SeedPhraseButton = new QPushButton(groupBox);
        SeedPhraseButton->setObjectName(QString::fromUtf8("SeedPhraseButton"));

        verticalLayout->addWidget(SeedPhraseButton);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        CreateAccountButton = new QPushButton(groupBox);
        CreateAccountButton->setObjectName(QString::fromUtf8("CreateAccountButton"));

        verticalLayout->addWidget(CreateAccountButton);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QDialog *Inbox)
    {
        Inbox->setWindowTitle(QApplication::translate("Inbox", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Inbox", "Sign in", nullptr));
        WalletIDLabel->setText(QApplication::translate("Inbox", "Wallet ID:", nullptr));
        PasswordLabel->setText(QApplication::translate("Inbox", "Password:", nullptr));
        LoginButton->setText(QApplication::translate("Inbox", "Login", nullptr));
        SeedPhraseButton->setText(QApplication::translate("Inbox", "Seed Phrase", nullptr));
        CreateAccountButton->setText(QApplication::translate("Inbox", "Create Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
