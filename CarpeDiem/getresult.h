#ifndef GETRESULT_H
#define GETRESULT_H

#include <QDialog>
#include "nomoney.h"

#include "amount.h"
class OperationWindow;
namespace Ui {
class GetResult;
}

class GetResult : public QDialog
{
    Q_OBJECT

public:
    explicit GetResult(QWidget *parent = 0,unsigned cs = 0);
    ~GetResult();
    void getCashWork(unsigned cs0);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::GetResult *ui;
    unsigned _cash;
    Amount _am;

    OperationWindow *_op;
    NoMoney *_nm;
};

#endif // GETRESULT_H
