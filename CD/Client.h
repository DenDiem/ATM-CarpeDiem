//create by Denys Baranov 26/10/18
#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <string>
using namespace std;
class CardCD;
class CCardCD;
class ClientCD
{
	ClientCD(string clName,string un,string pass);
	~ClientCD();
	CardCD& addCard();
	CCardCD& addCreditCard();

	const CardCD& addCard() const;
	const CCardCD& addCreditCard() const;


private:
	CardCD* _cards;
	CCardCD* _cCards;
	string _clientName;
	string _username;
	string password;

	ClientCD(const ClientCD&);
	const ClientCD& operator=(const ClientCD&);
};



#endif
