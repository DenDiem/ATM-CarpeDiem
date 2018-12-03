#ifndef RESULTSEND_H
#define RESULTSEND_H

#include <QDialog>
class OperationWindow;
namespace Ui {
class ResultSend;
}

class ResultSend : public QDialog
{
    Q_OBJECT

public:
    explicit ResultSend(QWidget *parent = 0,unsigned cs = 0);
    ~ResultSend();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ResultSend *ui;
    OperationWindow *_op;
};

#endif // RESULTSEND_H
