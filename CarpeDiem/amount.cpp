#include "amount.h"


Amount::Amount(const unsigned m50, const unsigned m100, const unsigned m200, const unsigned m500):
    _m50(m50),
    _m100(m100),
    _m200(m200),
    _m500(m500)
{

    return;
}

Amount::~Amount()
{

}
