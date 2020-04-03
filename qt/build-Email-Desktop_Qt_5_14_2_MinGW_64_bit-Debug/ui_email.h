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
    QPushButton *pushButton;
    QLabel *To;
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Email)
    {
        if (Email->objectName().isEmpty())
            Email->setObjectName(QString::fromUtf8("Email"));
        Email->resize(805, 553);
        pushButton = new QPushButton(Email);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 487, 111, 51));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        To = new QLabel(Email);
        To->setObjectName(QString::fromUtf8("To"));
        To->setGeometry(QRect(30, 30, 31, 21));
        QFont font1;
        font1.setPointSize(12);
        To->setFont(font1);
        label = new QLabel(Email);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 80, 55, 16));
        label->setFont(font1);
        textEdit = new QTextEdit(Email);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(13, 146, 781, 321));
        lineEdit = new QLineEdit(Email);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 30, 621, 22));
        lineEdit_2 = new QLineEdit(Email);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 80, 621, 22));
        pushButton_2 = new QPushButton(Email);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(272, 487, 121, 51));
        pushButton_2->setFont(font);

        retranslateUi(Email);

        QMetaObject::connectSlotsByName(Email);
    } // setupUi

    void retranslateUi(QDialog *Email)
    {
        Email->setWindowTitle(QCoreApplication::translate("Email", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Email", "Send", nullptr));
        To->setText(QCoreApplication::translate("Email", "To:", nullptr));
        label->setText(QCoreApplication::translate("Email", "From:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Email", "Save Draft", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Email: public Ui_Email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
