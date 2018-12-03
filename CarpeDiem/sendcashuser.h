#ifndef SENDCASHUSER_H
#define SENDCASHUSER_H

#include <QDialog>
#include "sendcash.h"
class sendCash;
class OperationWindow;
#include "useratm.h"
namespace Ui {
class SendCashUser;
}

class SendCashUser : public QDialog
{
    Q_OBJECT

public:
    explicit SendCashUser(QWidget *parent = 0);
    ~SendCashUser();

private slots:
    void on_pushButton_28_clicked();

    void on_pushButton_16_clicked();

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
    Ui::SendCashUser *ui;
    sendCash *_sc;
    OperationWindow *_op;

};

#endif // SENDCASHUSER_H
