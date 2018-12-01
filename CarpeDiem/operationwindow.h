#ifndef OPERATIONWINDOW_H
#define OPERATIONWINDOW_H

#include <QDialog>
#include "useratm.h"
#include "getcash.h"
#include "history.h"
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

private:
    Ui::OperationWindow *ui;
    UserATM _user;
    GetCash *gc;
    History *h;

};

#endif // OPERATIONWINDOW_H
