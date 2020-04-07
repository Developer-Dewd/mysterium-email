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


private:
    Ui::InboxWindow *ui;
};

#endif // INBOXWINDOW_H
