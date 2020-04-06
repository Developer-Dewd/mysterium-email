/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QListWidget *InboxListWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->resize(930, 554);
        InboxListWidget = new QListWidget(App);
        InboxListWidget->setObjectName(QString::fromUtf8("InboxListWidget"));
        InboxListWidget->setGeometry(QRect(0, 80, 281, 481));
        plainTextEdit = new QPlainTextEdit(App);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(280, 80, 651, 481));
        label = new QLabel(App);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 20, 121, 31));
        pushButton = new QPushButton(App);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 27, 93, 41));

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QDialog *App)
    {
        App->setWindowTitle(QCoreApplication::translate("App", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("App", "Hi, Username!", nullptr));
        pushButton->setText(QCoreApplication::translate("App", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
