#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>
#include <QDateTime>
#include "useratm.h"
#include "carpediematm.h"
class OperationWindow;
namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = 0);
    ~History();



private slots:
    void on_pushButton_27_clicked();

private:
    Ui::History *ui;

    OperationWindow *_op;





};

#endif // HISTORY_H
