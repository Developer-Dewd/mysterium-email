/********************************************************************************
** Form generated from reading UI file 'inboxwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOXWINDOW_H
#define UI_INBOXWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InboxWindow
{
public:
    QAction *actionens;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuemail_settings;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InboxWindow)
    {
        if (InboxWindow->objectName().isEmpty())
            InboxWindow->setObjectName(QString::fromUtf8("InboxWindow"));
        InboxWindow->resize(930, 600);
        actionens = new QAction(InboxWindow);
        actionens->setObjectName(QString::fromUtf8("actionens"));
        centralwidget = new QWidget(InboxWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 230, 55, 16));
        InboxWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InboxWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 930, 26));
        menuemail_settings = new QMenu(menubar);
        menuemail_settings->setObjectName(QString::fromUtf8("menuemail_settings"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        InboxWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InboxWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InboxWindow->setStatusBar(statusbar);

        menubar->addAction(menuemail_settings->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuemail_settings->addAction(actionens);

        retranslateUi(InboxWindow);

        QMetaObject::connectSlotsByName(InboxWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InboxWindow)
    {
        InboxWindow->setWindowTitle(QCoreApplication::translate("InboxWindow", "MainWindow", nullptr));
        actionens->setText(QCoreApplication::translate("InboxWindow", "ens domain", nullptr));
        label->setText(QCoreApplication::translate("InboxWindow", "dlids;l", nullptr));
        menuemail_settings->setTitle(QCoreApplication::translate("InboxWindow", "email settings", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("InboxWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InboxWindow: public Ui_InboxWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOXWINDOW_H
