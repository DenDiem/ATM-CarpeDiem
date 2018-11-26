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
