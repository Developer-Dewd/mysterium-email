/********************************************************************************
** Form generated from reading UI file 'inbox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOX_H
#define UI_INBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inbox
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QMdiArea *mdiArea;
    QWidget *page_2;

    void setupUi(QDialog *Inbox)
    {
        if (Inbox->objectName().isEmpty())
            Inbox->setObjectName(QString::fromUtf8("Inbox"));
        Inbox->resize(932, 622);
        stackedWidget = new QStackedWidget(Inbox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(19, -1, 921, 621));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(790, 510, 121, 101));
        mdiArea = new QMdiArea(page);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(60, 410, 200, 160));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QDialog *Inbox)
    {
        Inbox->setWindowTitle(QCoreApplication::translate("Inbox", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Inbox", "New Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
