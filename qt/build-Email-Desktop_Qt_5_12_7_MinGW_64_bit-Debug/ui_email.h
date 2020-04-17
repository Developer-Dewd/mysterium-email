/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Email
{
public:
    QPushButton *SendButton;
    QTextEdit *textEdit;
    QPushButton *SaveDraftButton;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *ToInput;
    QLineEdit *FromInput;
    QLineEdit *SubjectInput;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *To;
    QLabel *From;
    QLabel *Subject;

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
        textEdit = new QTextEdit(Email);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(13, 146, 781, 321));
        SaveDraftButton = new QPushButton(Email);
        SaveDraftButton->setObjectName(QString::fromUtf8("SaveDraftButton"));
        SaveDraftButton->setGeometry(QRect(272, 487, 121, 51));
        SaveDraftButton->setFont(font);
        label = new QLabel(Email);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 545, 91, 31));
        label->setAutoFillBackground(true);
        widget = new QWidget(Email);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 30, 651, 82));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ToInput = new QLineEdit(widget);
        ToInput->setObjectName(QString::fromUtf8("ToInput"));

        verticalLayout->addWidget(ToInput);

        FromInput = new QLineEdit(widget);
        FromInput->setObjectName(QString::fromUtf8("FromInput"));

        verticalLayout->addWidget(FromInput);

        SubjectInput = new QLineEdit(widget);
        SubjectInput->setObjectName(QString::fromUtf8("SubjectInput"));

        verticalLayout->addWidget(SubjectInput);

        widget1 = new QWidget(Email);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 30, 75, 81));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        To = new QLabel(widget1);
        To->setObjectName(QString::fromUtf8("To"));
        QFont font1;
        font1.setPointSize(12);
        To->setFont(font1);

        verticalLayout_2->addWidget(To);

        From = new QLabel(widget1);
        From->setObjectName(QString::fromUtf8("From"));
        From->setFont(font1);

        verticalLayout_2->addWidget(From);

        Subject = new QLabel(widget1);
        Subject->setObjectName(QString::fromUtf8("Subject"));
        Subject->setFont(font1);

        verticalLayout_2->addWidget(Subject);


        retranslateUi(Email);

        QMetaObject::connectSlotsByName(Email);
    } // setupUi

    void retranslateUi(QDialog *Email)
    {
        Email->setWindowTitle(QApplication::translate("Email", "Dialog", nullptr));
        SendButton->setText(QApplication::translate("Email", "Send", nullptr));
        SaveDraftButton->setText(QApplication::translate("Email", "Save Draft", nullptr));
        label->setText(QString());
        FromInput->setText(QApplication::translate("Email", "mysteriumuser.eth", nullptr));
        To->setText(QApplication::translate("Email", "To:", nullptr));
        From->setText(QApplication::translate("Email", "From:", nullptr));
        Subject->setText(QApplication::translate("Email", "Subject:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Email: public Ui_Email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
