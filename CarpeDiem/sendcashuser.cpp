#include "sendcashuser.h"
#include "ui_sendcashuser.h"
#include "useratm.h"
#include "mainwindow.h"
#include "operationwindow.h"
#include "sendcash.h"
SendCashUser::SendCashUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendCashUser),
    _op(0),
    _sc(0)
{
    ui->setupUi(this);
    ui->eCard->setInputMask("9999-9999-9999-9999");
}

SendCashUser::~SendCashUser()
{
    delete ui;
    delete _op;
    delete _sc;
}

void SendCashUser::on_pushButton_28_clicked()
{
    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();
}

void SendCashUser::on_pushButton_16_clicked()
{
    QString cardnum = ui->eCard->text();
    UserATM sendUser(cardnum);
    if(!QString::compare(sendUser.clientName(), QString("error"), Qt::CaseInsensitive))
    {
        ui->lError->setText("Not exists card");

    }else{
        if(sendUser.userID()==UserATM::currentUser.userID()){
            ui->lError->setText("Its your card...");
        }else{
        hide();
        _sc = new sendCash(this,sendUser);
        _sc->show();
        }
    }
}

void SendCashUser::on_btn_del_clicked()
{
    QString copy = ui->eCard->text().replace( "-", "" );
    copy.chop(1);
    ui->eCard->setText(copy);

}
void SendCashUser::on_btn_1_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"1");

}
void SendCashUser::on_btn_2_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"2");

}
void SendCashUser::on_btn_3_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"3");

}
void SendCashUser::on_btn_4_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"4");

}
void SendCashUser::on_btn_5_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"5");

}
void SendCashUser::on_btn_6_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"6");

}
void SendCashUser::on_btn_7_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"7");

}
void SendCashUser::on_btn_8_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"8");

}
void SendCashUser::on_btn_9_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"9");

}
void SendCashUser::on_btn_0_clicked()
{
    ui->eCard->setText(ui->eCard->text().replace( "-", "" )+"0");

}
