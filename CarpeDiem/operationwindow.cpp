#include "operationwindow.h"
#include "ui_operationwindow.h"
#include "mainwindow.h"
OperationWindow::OperationWindow(QWidget *parent,const UserATM& user) :
    QDialog(parent),
    _user(user),
    ui(new Ui::OperationWindow),
    gc(0)
{
    ui->setupUi(this);
    if(user.creditLim()>user.currentCash())
        ui->lBalance->setStyleSheet("color: red");
    ui->lBalance->setText(QString::number(user.currentCash()));
    ui->lCredit->setText(QString::number(user.creditLim()));
    ui->lName->setText(user.clientName()+" "+user.clientSurName());
    qDebug(_user.clientName().toLatin1());
}

OperationWindow::~OperationWindow()
{
    delete ui;
    delete gc;
}

const UserATM& OperationWindow::user() const
{
    return _user;
}
UserATM& OperationWindow::user()
{
    return _user;
}

void OperationWindow::on_pushButton_clicked()
{
    /*MainWindow *wdg = new MainWindow;
    wdg->show();
    hide();*/
    hide();
    gc = new GetCash(this);
    gc->show();


}

void OperationWindow::on_pushButton_4_clicked()
{
    hide();
  //  gc = new History();
   // gc->show();
}
