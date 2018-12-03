#ifndef PINWINDOW_H
#define PINWINDOW_H

#include <QDialog>
#include "useratm.h"
#include "operationwindow.h"
class MainWindow;
class OperationWindow;
namespace Ui {
class PinWindow;
}

class PinWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PinWindow(QWidget *parent = 0, const UserATM& user = UserATM());
    ~PinWindow();

    const UserATM& user() const;
    UserATM& user();

private slots:

    void on_bPass_clicked();

    void on_pushButton_clicked();


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
    Ui::PinWindow *ui;
    UserATM _user;
    OperationWindow *op;

    MainWindow *_mw;
};

#endif // PINWINDOW_H
