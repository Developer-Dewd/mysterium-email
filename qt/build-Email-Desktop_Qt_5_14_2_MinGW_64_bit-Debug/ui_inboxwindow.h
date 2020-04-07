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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InboxWindow
{
public:
    QAction *actionens;
    QAction *actionDrafts;
    QAction *actionWallet;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QListWidget *InboxListWidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuemail_settings;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InboxWindow)
    {
        if (InboxWindow->objectName().isEmpty())
            InboxWindow->setObjectName(QString::fromUtf8("InboxWindow"));
        InboxWindow->resize(931, 600);
        actionens = new QAction(InboxWindow);
        actionens->setObjectName(QString::fromUtf8("actionens"));
        actionDrafts = new QAction(InboxWindow);
        actionDrafts->setObjectName(QString::fromUtf8("actionDrafts"));
        actionWallet = new QAction(InboxWindow);
        actionWallet->setObjectName(QString::fromUtf8("actionWallet"));
        centralwidget = new QWidget(InboxWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(280, 70, 651, 481));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 20, 221, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        InboxListWidget = new QListWidget(centralwidget);
        InboxListWidget->setObjectName(QString::fromUtf8("InboxListWidget"));
        InboxListWidget->setGeometry(QRect(0, 70, 281, 481));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 93, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 20, 211, 31));
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);
        InboxWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InboxWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 931, 26));
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
        menuemail_settings->addAction(actionWallet);
        menuemail_settings->addAction(actionens);
        menuemail_settings->addAction(actionDrafts);

        retranslateUi(InboxWindow);

        QMetaObject::connectSlotsByName(InboxWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InboxWindow)
    {
        InboxWindow->setWindowTitle(QCoreApplication::translate("InboxWindow", "MainWindow", nullptr));
        actionens->setText(QCoreApplication::translate("InboxWindow", "ENS Domain", nullptr));
        actionDrafts->setText(QCoreApplication::translate("InboxWindow", "Drafts", nullptr));
        actionWallet->setText(QCoreApplication::translate("InboxWindow", "Wallet", nullptr));
        plainTextEdit->setPlainText(QString());
        label->setText(QCoreApplication::translate("InboxWindow", "Hello, mysteriumuser.eth", nullptr));
        pushButton->setText(QCoreApplication::translate("InboxWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("InboxWindow", "<html><head/><body><p>Balance: 2000 <span style=\" font-weight:600; color:#aa00ff;\">MYST</span> (<span style=\" font-weight:600;\">$1.00)</span></p></body></html>", nullptr));
        menuemail_settings->setTitle(QCoreApplication::translate("InboxWindow", "Email settings", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("InboxWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InboxWindow: public Ui_InboxWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOXWINDOW_H
