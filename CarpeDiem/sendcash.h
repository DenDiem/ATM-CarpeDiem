#ifndef SENDCASH_H
#define SENDCASH_H

#include <QDialog>
#include "useratm.h"
class ResultSend;
class OperationWindow;
namespace Ui {
class sendCash;
}

class sendCash : public QDialog
{
    Q_OBJECT

public:
    explicit sendCash(QWidget *parent = 0,const UserATM& ua = UserATM());
    ~sendCash();
    void sendMoney(UserATM& sender, UserATM& reciever, double& amount);

private slots:
    void on_pushButton_16_clicked();

    void on_pushButton_28_clicked();


    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();

    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();

    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();

    void on_btn_0_clicked();

    void on_btn_del_clicked();

private:
    Ui::sendCash *ui;
    OperationWindow *_op;

    UserATM _ua;

    ResultSend *_rs;
};

#endif // SENDCASH_H
