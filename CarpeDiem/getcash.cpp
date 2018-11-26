#include "getcash.h"
#include "ui_getcash.h"

GetCash::GetCash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetCash)
{
    ui->setupUi(this);
}

GetCash::~GetCash()
{
    delete ui;
}
