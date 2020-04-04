/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Email
{
public:
    QPushButton *SendButton;
    QLabel *To;
    QLabel *From;
    QTextEdit *textEdit;
    QLineEdit *ToInput;
    QLineEdit *FromInput;
    QPushButton *SaveDraftButton;
    QLabel *label;

    void setupUi(QDialog *Email)
    {
        if (Email->objectName().isEmpty())
            Email->setObjectName(QString::fromUtf8("Email"));
        Email->resize(805, 582);
        SendButton = new QPushButton(Email);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        SendButton->setGeometry(QRect(420, 487, 111, 51));
        QFont font;
        font.setPointSize(10);
        SendButton->setFont(font);
        To = new QLabel(Email);
        To->setObjectName(QString::fromUtf8("To"));
        To->setGeometry(QRect(30, 30, 31, 21));
        QFont font1;
        font1.setPointSize(12);
        To->setFont(font1);
        From = new QLabel(Email);
        From->setObjectName(QString::fromUtf8("From"));
        From->setGeometry(QRect(30, 80, 55, 16));
        From->setFont(font1);
        textEdit = new QTextEdit(Email);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(13, 146, 781, 321));
        ToInput = new QLineEdit(Email);
        ToInput->setObjectName(QString::fromUtf8("ToInput"));
        ToInput->setGeometry(QRect(120, 30, 621, 22));
        FromInput = new QLineEdit(Email);
        FromInput->setObjectName(QString::fromUtf8("FromInput"));
        FromInput->setGeometry(QRect(120, 80, 621, 22));
        SaveDraftButton = new QPushButton(Email);
        SaveDraftButton->setObjectName(QString::fromUtf8("SaveDraftButton"));
        SaveDraftButton->setGeometry(QRect(272, 487, 121, 51));
        SaveDraftButton->setFont(font);
        label = new QLabel(Email);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 545, 91, 31));
        label->setAutoFillBackground(true);

        retranslateUi(Email);

        QMetaObject::connectSlotsByName(Email);
    } // setupUi

    void retranslateUi(QDialog *Email)
    {
        Email->setWindowTitle(QCoreApplication::translate("Email", "Dialog", nullptr));
        SendButton->setText(QCoreApplication::translate("Email", "Send", nullptr));
        To->setText(QCoreApplication::translate("Email", "To:", nullptr));
        From->setText(QCoreApplication::translate("Email", "From:", nullptr));
        SaveDraftButton->setText(QCoreApplication::translate("Email", "Save Draft", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Email: public Ui_Email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
