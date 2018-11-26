#include "pinwindow.h"
#include "ui_pinwindow.h"
#include <QtSql>
#include "operationwindow.h"
PinWindow::PinWindow(QWidget *parent, const UserATM& user) :
    QDialog(parent),
    ui(new Ui::PinWindow),
    _user(user),
    op(0)
{

    qDebug("1");
    ui->setupUi(this);

}

PinWindow::~PinWindow()
{
    delete ui;
    delete op;

}


void PinWindow::on_bPass_clicked()
{

    if(user().clientName()=="error")
    {
        ui->lError->setText("Not exists card or invalid password");

    }
    else if(!user().avalible())
    {
        ui->lError->setText("card is block NOW, call +380662939105");
    }
    else
    {
        qDebug("static: " + UserATM::currentUser.clientName().toLatin1());
        const QString& pass = ui->ePass->text();
        QString inputPass = QString(QCryptographicHash::hash((pass.toLatin1()),QCryptographicHash::Md5).toHex());

        qDebug("db: "+ user().pass().toLatin1());
        qDebug("enter: "+ inputPass.toLatin1());
        if(inputPass==user().pass()){
            hide();
            qDebug("user: "+user().clientName().toLatin1());
            op = new OperationWindow(this,user());
            op->show();
        }else{
            user().attempts()=user().attempts()+1;
            ui->lError->setText("invalid password, attemts left:"+ QString::number(3 - user().attempts()).toLatin1());
            if(user().attempts()>2)
                user().avalible()=0;
            user().updateUser();

        }
    }

}

const UserATM& PinWindow::user() const
{
    return _user;
}
UserATM& PinWindow::user()
{
    return _user;
}
