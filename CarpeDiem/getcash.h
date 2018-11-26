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
    explicit GetCash(QWidget *parent = 0);
    ~GetCash();

private:
    Ui::GetCash *ui;
};

#endif // GETCASH_H
