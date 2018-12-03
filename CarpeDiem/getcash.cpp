#include "getcash.h"
#include "ui_getcash.h"
#include "carpediematm.h"
GetCash::GetCash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetCash),
    _nm(0),
    _gr(0),
    _op(0)
{
    ui->setupUi(this);
    ui->ePass->setInputMask("9999");


}


GetCash::~GetCash()
{
    delete ui;
    delete _nm;
    delete _gr;
    delete _op;
}

void GetCash::on_pushButton_13_clicked()
{
    if(UserATM::currentUser.currentCash()<100){
        ui->eLabel->setText("No enough money");
    }else{
        hide();
        _gr = new GetResult(this,100);
        _gr->show();
    }
}

void GetCash::on_pushButton_15_clicked()
{
    if(UserATM::currentUser.currentCash()<200){
        ui->eLabel->setText("No enough money");
    }else{
        hide();
        _gr = new GetResult(this,200);
        _gr->show();
    }
}

void GetCash::on_pushButton_16_clicked()
{
    if(CarpeDiemATM::currentATM.amount().allMoney()>4000){

        unsigned cash = ui->ePass->text().toInt();

        if(cash>4000 || cash==0){
            ui->eLabel->setText("must be  by <4000");
        }else{
            if(cash%50!=0){
                ui->eLabel->setText("must be divided by 50");
            }else
            {
                if(UserATM::currentUser.currentCash()<cash){
                    ui->eLabel->setText("No enough money");
                }else{
                    hide();
                    _gr = new GetResult(this,cash);
                    _gr->show();
                }
            }
        }
    }

    else{

        hide();
        _nm = new NoMoney();

        _nm->show();
        _nm->exec();

    }
}


void GetCash::on_pushButton_27_clicked()
{

    hide();
    _op = new OperationWindow(this,UserATM::currentUser);
    _op->show();
}

void GetCash::on_btn_del_clicked()
{
    QString copy = ui->ePass->text().replace( "-", "" );
    copy.chop(1);
    ui->ePass->setText(copy);

}
void GetCash::on_btn_1_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"1");

}
void GetCash::on_btn_2_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"2");

}
void GetCash::on_btn_3_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"3");

}
void GetCash::on_btn_4_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"4");

}
void GetCash::on_btn_5_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"5");

}
void GetCash::on_btn_6_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"6");

}
void GetCash::on_btn_7_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"7");

}
void GetCash::on_btn_8_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"8");

}
void GetCash::on_btn_9_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"9");

}
void GetCash::on_btn_0_clicked()
{
    ui->ePass->setText(ui->ePass->text().replace( "-", "" )+"0");

}
