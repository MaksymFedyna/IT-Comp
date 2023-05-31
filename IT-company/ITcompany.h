#pragma once
#include "Includer.h"
#include "Money.h"
#include "Poslugu.h"
#include "Profesion.h"

class ITcompany:public Poslugu,public Money,public Profesion
{
public:
	ITcompany(string name, string adress);
	virtual~ITcompany();
	void show_adress();
	void option_adress_ad();
	void option_name_ad();
	string get_Name();
protected:
	string name, adress;

};

