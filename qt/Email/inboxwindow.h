#ifndef INBOXWINDOW_H
#define INBOXWINDOW_H

#include <QMainWindow>
#include "QListWidgetItem"

namespace Ui {
class InboxWindow;
}

class InboxWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InboxWindow(QWidget *parent = nullptr);
    ~InboxWindow();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_plainTextEdit_textChanged();

    void on_InboxListWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::InboxWindow *ui;
};

#endif // INBOXWINDOW_H
