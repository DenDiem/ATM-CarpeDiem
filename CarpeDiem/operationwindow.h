#ifndef OPERATIONWINDOW_H
#define OPERATIONWINDOW_H

#include <QDialog>
#include "useratm.h"
#include "getcash.h"
#include "history.h"
#include "mainwindow.h"
class GetCash;
class MainWindow;
class SendCashUser;
namespace Ui {
class OperationWindow;
}

class OperationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OperationWindow(QWidget *parent = 0, const UserATM& user = UserATM());
    ~OperationWindow();
    const UserATM& user() const;
    UserATM& user();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::OperationWindow *ui;
    UserATM _user;
    GetCash *gc;
    History *h;
    MainWindow *_mw;
    SendCashUser *_scu;

};

#endif // OPERATIONWINDOW_H
