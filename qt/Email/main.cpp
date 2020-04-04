#include "mainwindow.h"
#include "QLabel"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Initialize and show window
    MainWindow w;
    w.show();
    return a.exec();
}
