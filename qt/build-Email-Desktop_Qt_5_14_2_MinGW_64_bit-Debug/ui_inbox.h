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

QT_BEGIN_NAMESPACE

class Ui_Inbox
{
public:

    void setupUi(QDialog *Inbox)
    {
        if (Inbox->objectName().isEmpty())
            Inbox->setObjectName(QString::fromUtf8("Inbox"));
        Inbox->resize(932, 622);

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QDialog *Inbox)
    {
        Inbox->setWindowTitle(QCoreApplication::translate("Inbox", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
