#ifndef INBOXWINDOW_H
#define INBOXWINDOW_H

#include <QMainWindow>

namespace Ui {
class InboxWindow;
}

class InboxWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InboxWindow(QWidget *parent = nullptr);
    ~InboxWindow();

private:
    Ui::InboxWindow *ui;
};

#endif // INBOXWINDOW_H
