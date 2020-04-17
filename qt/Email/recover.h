#ifndef RECOVER_H
#define RECOVER_H

#include <QDialog>

namespace Ui {
class Recover;
}

class Recover : public QDialog
{
    Q_OBJECT

public:
    explicit Recover(QWidget *parent = nullptr);
    ~Recover();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Recover *ui;
};

#endif // RECOVER_H
