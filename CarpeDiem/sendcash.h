#ifndef SENDCASH_H
#define SENDCASH_H

#include <QDialog>
#include "useratm.h"

namespace Ui {
class sendCash;
}

class sendCash : public QDialog
{
    Q_OBJECT

public:
    explicit sendCash(QWidget *parent = 0);
    ~sendCash();
    void sendMoney(UserATM& sender, UserATM& reciever, double& amount);

private:
    Ui::sendCash *ui;

};

#endif // SENDCASH_H
