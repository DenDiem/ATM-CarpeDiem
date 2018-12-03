#include "resultsend.h"
#include "ui_resultsend.h"
#include "operationwindow.h"
ResultSend::ResultSend(QWidget *parent, unsigned cs) :
    QDialog(parent),
    ui(new Ui::ResultSend),
  _op(0)
{
    ui->setupUi(this);
    ui->lSender->setText("-"+QString::number(cs));
    ui->lReceiver->setText("+"+QString::number(cs*0.99));

}

ResultSend::~ResultSend()
{
    delete ui;
    delete _op;
}

void ResultSend::on_pushButton_2_clicked()
{
    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();
}
