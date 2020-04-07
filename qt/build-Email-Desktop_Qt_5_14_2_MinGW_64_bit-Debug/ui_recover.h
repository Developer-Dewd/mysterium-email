/********************************************************************************
** Form generated from reading UI file 'recover.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVER_H
#define UI_RECOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Recover
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *Recover)
    {
        if (Recover->objectName().isEmpty())
            Recover->setObjectName(QString::fromUtf8("Recover"));
        Recover->resize(610, 358);
        textEdit = new QTextEdit(Recover);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 571, 311));

        retranslateUi(Recover);

        QMetaObject::connectSlotsByName(Recover);
    } // setupUi

    void retranslateUi(QDialog *Recover)
    {
        Recover->setWindowTitle(QCoreApplication::translate("Recover", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recover: public Ui_Recover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVER_H
