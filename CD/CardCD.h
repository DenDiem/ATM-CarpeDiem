//create by Denys Baranov 26/10/18
#ifndef _CardCD_H_
#define _CardCD_H_

#include <iostream>
using namespace std;
#include <string>

class CardCD
{
	CardCD(unsigned amount,string un,string cardnumber);

	unsigned amount();
	const unsigned amount() const;
	friend class ATM;
private:
	double _amount;
	bool _credit;
	string _username;
	string _cardnumber;
	string _password;
};

#endif
