#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datebase.h"
#include <QtSql/QtSql>
#include "useratm.h"
#include "nomoney.h"
#include "pinwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    pin(0),
    _nm(0)

{

    ui->setupUi(this);


   ui->eCardNum->setInputMask("9999-9999-9999-9999");
   if(CarpeDiemATM::currentATM.amount().allMoney()<4000){
       hide();
       _nm = new NoMoney();
       _nm->show();
       _nm->exec();
       setEnabled(false);

   }

           QPixmap pix(":/new/img/img/card.png");

           ui->label_3->setPixmap(pix);
           ui->label_3->setScaledContents( true );

           ui->label_3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
           DateBase::myDate.open();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pin;
    delete _nm;

}

void MainWindow::on_pushButton_clicked()
{
    hide();
    const QString& creditCard = ui->eCardNum->text();
    qDebug(creditCard.toLatin1());
    UserATM::currentUser = UserATM(creditCard);
    pin = new PinWindow(this,UserATM(creditCard));
    pin->show();
}


void MainWindow::on_btn_del_clicked()
{
    QString copy = ui->eCardNum->text().replace( "-", "" );
    copy.chop(1);
    ui->eCardNum->setText(copy);

}
void MainWindow::on_btn_1_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"1");

}
void MainWindow::on_btn_2_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"2");

}
void MainWindow::on_btn_3_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"3");

}
void MainWindow::on_btn_4_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"4");

}
void MainWindow::on_btn_5_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"5");

}
void MainWindow::on_btn_6_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"6");

}
void MainWindow::on_btn_7_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"7");

}
void MainWindow::on_btn_8_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"8");

}
void MainWindow::on_btn_9_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"9");

}
void MainWindow::on_btn_0_clicked()
{
    ui->eCardNum->setText(ui->eCardNum->text().replace( "-", "" )+"0");

}
