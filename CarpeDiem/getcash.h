#ifndef GETCASH_H
#define GETCASH_H

#include <QDialog>
#include "nomoney.h"
#include "getresult.h"
#include "operationwindow.h"
class OperationWindow;
namespace Ui {
class GetCash;
}

class GetCash : public QDialog
{
    Q_OBJECT

public:
    explicit GetCash(QWidget *parent = 0);

    ~GetCash();

private slots:
    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_27_clicked();


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
    Ui::GetCash *ui;


    NoMoney *_nm;
    GetResult *_gr;

    OperationWindow *_op;
};

#endif // GETCASH_H
