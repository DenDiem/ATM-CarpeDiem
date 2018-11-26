#ifndef PINWINDOW_H
#define PINWINDOW_H

#include <QDialog>
#include "useratm.h"
#include "operationwindow.h"
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

private:
    Ui::PinWindow *ui;
    UserATM _user;
    OperationWindow *op;
};

#endif // PINWINDOW_H
