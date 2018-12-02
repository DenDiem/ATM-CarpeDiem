#ifndef GETCASH_H
#define GETCASH_H

#include <QDialog>

namespace Ui {
class GetCash;
}

class GetCash : public QDialog
{
    Q_OBJECT

public:
    explicit GetCash(QWidget *parent = 0, unsigned gc = 0);
    void getCashWork(unsigned cs0);
    ~GetCash();

private:
    Ui::GetCash *ui;
    unsigned getCash;
    unsigned m50;
    unsigned m100;
    unsigned m200;
    unsigned m500;
};

#endif // GETCASH_H
