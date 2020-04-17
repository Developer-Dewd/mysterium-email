/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *TopRightLogo;
    QLabel *TRLText;
    QLabel *MainTitle;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 140, 200)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TopRightLogo = new QLabel(centralwidget);
        TopRightLogo->setObjectName(QString::fromUtf8("TopRightLogo"));
        TopRightLogo->setGeometry(QRect(30, 20, 121, 81));
        TopRightLogo->setAutoFillBackground(false);
        TopRightLogo->setPixmap(QPixmap(QString::fromUtf8("../../assets/mysterium-small.png")));
        TopRightLogo->setScaledContents(false);
        TopRightLogo->setWordWrap(false);
        TRLText = new QLabel(centralwidget);
        TRLText->setObjectName(QString::fromUtf8("TRLText"));
        TRLText->setGeometry(QRect(170, 40, 131, 41));
        QFont font;
        font.setPointSize(16);
        TRLText->setFont(font);
        TRLText->setAutoFillBackground(false);
        TRLText->setScaledContents(true);
        MainTitle = new QLabel(centralwidget);
        MainTitle->setObjectName(QString::fromUtf8("MainTitle"));
        MainTitle->setGeometry(QRect(160, 220, 451, 111));
        QFont font1;
        font1.setPointSize(48);
        MainTitle->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(164, 330, 451, 20));
        QFont font2;
        font2.setPointSize(11);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        TopRightLogo->setText(QString());
        TRLText->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Mysterium</span></p></body></html>", nullptr));
        MainTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Secure Email</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Powered By the Mysterium Network</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
