#include "sendcash.h"
#include "ui_sendcash.h"

sendCash::sendCash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendCash)
{
    ui->setupUi(this);
}

sendCash::~sendCash()
{
    delete ui;
}

void sendCash::sendMoney(UserATM& sender, UserATM& reciever, double& amount){
    if (sender.currentCash() >= amount)
    {
        sender.currentCash() -= amount;
        reciever.currentCash()+= amount;
        sender.updateUser();
        reciever.updateUser();
    }
    else if(sender.currentCash() >= amount)
    {
        sender.creditLim() -= amount;
        reciever.currentCash()+= amount;
        sender.updateUser();
        reciever.updateUser();
    }
    else {
        qDebug("Error");
    }

}
