#include "operationwindow.h"
#include "ui_operationwindow.h"
#include "mainwindow.h"
#include "datebase.h"
#include "sendcashuser.h"
OperationWindow::OperationWindow(QWidget *parent,const UserATM& user) :
    QDialog(parent),
    _user(user),
    ui(new Ui::OperationWindow),
    gc(0),
    _mw(0),
    _scu(0)
{
    ui->setupUi(this);
    //DateBase::myDate.close();
   // DateBase::myDate myDate;
    if(user.creditLim()>user.currentCash())
        ui->lBalance->setStyleSheet("font: 75 18pt \"MS Shell Dlg 2\";color:red");
    ui->lBalance->setText(QString::number(user.currentCash()));
    ui->lCredit->setText(QString::number(user.creditLim()));
    ui->lName->setText(user.clientName()+" "+user.clientSurName());
    qDebug(_user.clientName().toLatin1());
    UserATM::currentUser.attempts()=0;
    UserATM::currentUser.avalible()=1;

    DateBase::myDate.open();

}

OperationWindow::~OperationWindow()
{
    delete ui;
    delete gc;
    delete _mw;
    delete _scu;
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
    h = new History();
    h->show();
}

void OperationWindow::on_pushButton_6_clicked()
{

    hide();
    _mw = new MainWindow();
    _mw->show();
}

void OperationWindow::on_pushButton_2_clicked()
{
    hide();
    _scu = new SendCashUser();
    _scu->show();

}
