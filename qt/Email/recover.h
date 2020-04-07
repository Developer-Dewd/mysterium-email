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

private:
    Ui::Recover *ui;
};

#endif // RECOVER_H
