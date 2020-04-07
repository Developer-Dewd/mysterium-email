#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT //For signals and slots in the widget

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow(); //ptr destructor

private slots:
    void on_pushButton_clicked();
    void load_app();

private:
    Ui::MainWindow *ui; //Object to access widgets
    QTimer *timer;
};
#endif // MAINWINDOW_H
