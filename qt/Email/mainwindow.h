#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui; //Object to access widgets
};
#endif // MAINWINDOW_H
