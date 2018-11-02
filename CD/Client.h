//create by Denys Baranov 26/10/18
#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <string>
using namespace std;
class CardCD;
class ClientCD
{
	ClientCD(string clName,string un,string pass);
	~ClientCD();
	CardCD& addCard();
	const CardCD& addCard() const;


private:
	CardCD* _cards;
	string _clientName;
	string _username;
	string password;

	ClientCD(const ClientCD&);
	const ClientCD& operator=(const ClientCD&);
};



#endif
