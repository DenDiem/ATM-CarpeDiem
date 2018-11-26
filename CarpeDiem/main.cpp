#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql>
#include "datebase.h"
int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
     MainWindow w;
    w.show();



    return a.exec();
}

/* QString blah = QString(QCryptographicHash::hash(("myPassword"),QCryptographicHash::Md5).toHex());
        qDebug(blah.toLatin1());
        QString blah2 = QString(QCryptographicHash::hash(("2222"),QCryptographicHash::Md5).toHex());
            qDebug(blah2.toLatin1());
*/
