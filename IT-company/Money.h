#pragma once
#include "Includer.h"
class Money
{
public:
	Money();
	Money(int price);
	virtual~Money();
	void oplat_poslugu();
	void Gamanec();
	void bygalt();
	int getprice();

protected:
	int selery,ownmoney,client_money,gomoney,balance = 200;
	string name_poslug;
	int price, id_r;
};

