#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datebase.h"
#include <QtSql/QtSql>
#include "useratm.h"
int MainWindow::i = 2;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    pin(0)

{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pin;

}

void MainWindow::on_pushButton_clicked()
{
    hide();
    const QString& creditCard = ui->eCardNum->text();
    UserATM::currentUser = UserATM(creditCard);
    pin = new PinWindow(this,UserATM(creditCard));
    pin->show();
}

