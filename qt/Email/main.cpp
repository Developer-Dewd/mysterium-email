#include "mainwindow.h"
#include "inboxwindow.h"
#include "QLabel"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Initialize and show window
    MainWindow w;
    w.show();
    /*
     * testing 2nd QWidget
    */
//    InboxWindow i;
//    i.show();
    return a.exec();
}
