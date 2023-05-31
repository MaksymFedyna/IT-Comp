#pragma once
#include "Includer.h"
class Profesion
{
public:
	Profesion();
	Profesion(string name_w,int selery_w);
	virtual~Profesion();
	void show_peoople();
	void add_worker();
	void delete_worker();
	int size_worker();
	void prac();
	int getselery();
protected:
	struct worker
	{
		string name;
		int selery;
		int age;
		int id;
	};
	string name_w;
	int selery_w, id_w,age_w;
	vector<int> id_d_w,emp_v;/////// id_delete_worker
	int index_w;
};

