#pragma once
#include "./Includer.h"
#include "ITcompany.h"
#include "Money.h"
#include "Poslugu.h"
#include "Profesion.h"
#include <string>
using namespace std;
class Admin :public Poslugu, public Money, public Profesion
{
public:
	Admin(string name,int pass);
	virtual~Admin();
	void setpass(int pass);
	int getpass();
private:
	int pass = 1111;
	string name_admin;
};

