//create by Denys Baranov 26/10/18
#ifndef _CardCD_H_
#define _CardCD_H_

#include <string>
using namespace std;

class CardCD
{
	CardCD(unsigned amount=0,string un,string cardnumber);

	unsigned amount();
	const unsigned amount() const;



private:
	unsigned _amount;
	string _username;
	string _cardnumber;
};

#endif
