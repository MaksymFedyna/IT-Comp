#pragma once
#include "Includer.h"
class Poslugu
{
public:
	Poslugu();
	Poslugu(string name_poslug, int price);
	virtual~Poslugu();
	void show_poslug();
	void choose_poslug();
	void option_poslug();
	int size_poslug();
	void delete_poslug();
protected:
	string name_poslug;
	int price, id_r;
	vector<int>choose_id;
	vector<int>id_d;

	struct poslug
	{
		string name;
		int price;
		int id;
	};
};

