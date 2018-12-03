#include "amount.h"


Amount::Amount(const unsigned m50, const unsigned m100, const unsigned m200, const unsigned m500):
    _m50(m50),
    _m100(m100),
    _m200(m200),
    _m500(m500)
{

    return;
}

Amount::Amount(const Amount & a):
    _m50(a.m50()),
    _m100(a.m100()),
    _m200(a.m200()),
    _m500(a.m500())
{

}

Amount &Amount::operator=(const Amount & a)
{
    m50()=(a.m50());
    m100() =(a.m100());
    m200() = (a.m200());
    m500()= (a.m500());

    return *this;
}

Amount::~Amount()
{

}
