#include "Profesion.h"
#include <string>

Profesion::Profesion()
{
}

Profesion::Profesion(string name_w, int selery_w):name_w(name_w),selery_w(selery_w)
{
}

Profesion::~Profesion()
{
}

void Profesion::show_peoople()
{
	ifstream in;
	in.open("worker.txt");
	int index = 0;
	string four;
	
	while (!in.eof())
	{
		in >> four;
		in >> four;
		in >> four;
		in >> four;
		index++;
	}
	in.close();
	ifstream inn;
	inn.open("worker.txt");
	worker* myworker = new worker[index];
	for (size_t i = 0; i < index; i++)
	{
		inn >> myworker[i].name;
		inn >> myworker[i].age;
		inn >> myworker[i].selery;
		inn >> myworker[i].id;
		if (myworker[i].age < -10000) {

		}
		else
		{
			if (myworker[i].age == 0) {

			}
			else
			{
				cout << myworker[i].name << "\t" << myworker[i].age << "\t" << myworker[i].selery << "\t" << myworker[i].id << endl;
			}
		}
		

	}
	inn.close();
}

void Profesion::add_worker()
{
	ofstream out;
	out.open("worker.txt",ios::app);
	int index = 1;
	worker* myworker = new worker[index];
	for (size_t i = 0; i < index; i++)
	{
		cout << "\n¬вед≥ть ≥м€ прац≥вника\n";
		cin >> myworker[i].name;
		cout << "\n¬вед≥ть в≥к прац≥вника\n";
		cin >> myworker[i].age;
		cout << "\n¬вед≥ть зарплату прац≥вника\n";
		cin >> myworker[i].selery;
		cout << "\n¬вед≥ть ≥д прац≥вника\n";
		cin >> myworker[i].id;
		if (out.is_open())
		{
			out <<"\n"<< myworker[i].name << "\t" << myworker[i].age << "\t" << myworker[i].selery << "\t" << myworker[i].id<<endl;
		}
	}
}

void Profesion::delete_worker()
{
	show_peoople();
	cout << "\n¬вед≥ть ≥д людей €ких потр≥бно зв≥льнити\n";
	int f;
	while (true)
	{
		cin >> f;
		if (f == 99) {
			break;
		}
		id_d_w.push_back(f);
	}
	ifstream inn;
	inn.open("worker.txt");
	int index = size_worker();
	vector<worker> myworker (index);
	for (size_t i = 0; i < index; i++)
	{
		inn >> myworker[i].name;
		inn >> myworker[i].age;
		inn >> myworker[i].selery;
		inn >> myworker[i].id;

	}
	myworker.erase(myworker.begin() + (id_d_w[0] - 1));
	id_d_w = emp_v;
	ofstream out;
	out.open("worker.txt");
	for (size_t i = 0; i < index - 2; i++)
	{
		out << myworker[i].name << "\t" << myworker[i].age << "\t" << myworker[i].selery << "\t" << myworker[i].id << endl;
	}
	int d = index - 2;
	out << myworker[d].name << "\t" << myworker[d].age << "\t" << myworker[d].selery << "\t" << myworker[d].id ;
	inn.close();
	

}

int Profesion::size_worker()
{
	ifstream in;
	in.open("worker.txt");
	int index = 0;
	string four;

	while (!in.eof())
	{
		in >> four;
		in >> four;
		in >> four;
		in >> four;
		index++;
	}
	in.close();
	return index;
}

void Profesion::prac()
{
	cout << "\n—писок прац≥вник≥в\t - 1" << "\nЌайн€ти прац≥вника\t - 2" << "\n«в≥льнити прац≥вника\t - 3\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		show_peoople();
		cin.get();
		break;
	}
	case 2: {
		add_worker();
		cin.get();
		break;
	}
	case 3: {
		delete_worker();
		cin.get();
		break;
	}
	default:
		break;
	}
}

int Profesion::getselery()
{
	return selery_w;
}
