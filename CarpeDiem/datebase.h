#ifndef DATEBASE_H
#define DATEBASE_H
#include <QtSql>
#include <QApplication>
class DateBase
{
private:
    QString _type;
    QString _host;
    QString _name;
    QString _user;
    QString _pass;

    QSqlDatabase db;

    DateBase(const DateBase&);
    DateBase& operator=(const DateBase&);
public:

    DateBase(const QString& type = "QMYSQL",const QString& host = "mysql6002.site4now.net",
            const QString& name = "db_a4231e_dendiem",const QString& user = "a4231e_dendiem",
             const QString& pass = "AtmCplusplus1");
    ~DateBase();

    static DateBase myDate;
    void close();
};

#endif // DATEBASE_H

