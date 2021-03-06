#ifndef EMAIL_H
#define EMAIL_H

#include <QDialog>

namespace Ui {
class Email;
}

class Email : public QDialog
{
    Q_OBJECT

public:
    explicit Email(QWidget *parent = nullptr);
    ~Email();

private slots:
    void on_SendButton_clicked();

    void on_SaveDraftButton_clicked();

private:
    Ui::Email *ui;
};

#endif // EMAIL_H
