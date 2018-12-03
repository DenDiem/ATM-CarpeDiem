#include "pinwindow.h"
#include "ui_pinwindow.h"
#include <QtSql>
#include "operationwindow.h"
#include "mainwindow.h"
#include "datebase.h"
PinWindow::PinWindow(QWidget *parent, const UserATM& user) :
    QDialog(parent),
    ui(new Ui::PinWindow),
    _user(user),
    op(0),
    _mw(0)
{

    qDebug("1");
    ui->setupUi(this);
    DateBase::myDate.open();
    ui->ePass->setInputMask("9999");

}

PinWindow::~PinWindow()
{
    delete ui;
    delete op;
    delete _mw;

}


void PinWindow::on_bPass_clicked()
{
    UserATM::currentUser = UserATM(UserATM::currentUser.cardNum());

    if(!QString::compare(UserATM::currentUser.clientName(), QString("error"), Qt::CaseInsensitive))
    {
        qDebug("компаре тву стрингс: " + UserATM::currentUser.clientName().toLatin1());
        ui->lError->setText("Not exists card or invalid password");

    }
    else if(!UserATM::currentUser.avalible())
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
            if(user().attempts()>2){
                user().avalible()=0;
                ui->lError->setText("card is block NOW, call +380662939105");
            }

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

void PinWindow::on_pushButton_clicked()
{

    hide();
    _mw = new MainWindow();
    _mw->show();
}

void PinWindow::on_btn_del_clicked()
{
    QString copy = ui->ePass->text().replace( "-", "" );
    copy.chop(1);
    ui->ePass->setText(copy);

}
void PinWindow::on_btn_1_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"1");

}
void PinWindow::on_btn_2_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"2");

}
void PinWindow::on_btn_3_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"3");

}
void PinWindow::on_btn_4_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"4");

}
void PinWindow::on_btn_5_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"5");

}
void PinWindow::on_btn_6_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"6");

}
void PinWindow::on_btn_7_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"7");

}
void PinWindow::on_btn_8_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"8");

}
void PinWindow::on_btn_9_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"9");

}
void PinWindow::on_btn_0_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"0");

}
