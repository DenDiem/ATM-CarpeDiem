#ifndef AMOUNT_H
#define AMOUNT_H


class Amount
{
    private:
    unsigned _m50;
    unsigned _m100;
    unsigned _m200;
    unsigned _m500;

    public:
    Amount(const unsigned m50 = 0, const unsigned m100 = 0, const unsigned m200 = 0, const unsigned m500 = 0);

    Amount(const Amount&);
    Amount& operator=(const Amount&);
    ~Amount();
    unsigned& m50(){return _m50;}
    unsigned& m100(){return _m100;}
    unsigned& m200(){return _m200;}
    unsigned& m500(){return _m500;}

    const unsigned& m50() const{return _m50;}
    const unsigned& m100() const{return _m100;}
    const unsigned& m200() const{return _m200;}
    const unsigned& m500() const{return _m500;}

    unsigned allMoney(){return _m50*50+_m100*100+_m200*200+_m500*500;}


};
#endif // AMOUNT_H
