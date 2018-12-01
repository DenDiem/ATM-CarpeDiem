#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>
#include <QDateTime>
#include "useratm.h"
#include "carpediematm.h"

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = 0);
    ~History();
    History();

    //selector

    const QDateTime& date() const;
    const QString& address() const;

    QDateTime& date();
    QString& address();

private:
    Ui::History *ui;

    UserATM _user;
    QDateTime _date;
    QString _address;
    CarpeDiemATM _ATM;

};

#endif // HISTORY_H
