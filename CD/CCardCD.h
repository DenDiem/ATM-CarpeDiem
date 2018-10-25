//create by Denys Baranov 26/10/18
#ifndef _CCardCD_H_
#define _CCardCD_H_

#include <string>
using namespace std;

class CCardCD
{
	CCardCD(unsigned amount=0,string un,string cardnumber);

	int amount();
	const int amount() const;

	unsigned creditLim();
	const unsigned creditLim() const;

private:
	int _amount;
	unsigned _creditlimit;
	string _username;
	string _cardnumber;
};

#endif