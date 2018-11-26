#ifndef SENDCASH_H
#define SENDCASH_H

#include <QDialog>

namespace Ui {
class sendCash;
}

class sendCash : public QDialog
{
    Q_OBJECT

public:
    explicit sendCash(QWidget *parent = 0);
    ~sendCash();

private:
    Ui::sendCash *ui;
};

#endif // SENDCASH_H
