#include "Poslugu.h"
using namespace std;
Poslugu::Poslugu()
{
}

Poslugu::Poslugu(string name_poslug, int price) :name_poslug(name_poslug), price(price)
{
}

Poslugu::~Poslugu()
{
}

void Poslugu::show_poslug()
{
	ifstream in;
	in.open("poslug1.txt");
	cout << "Послуга\t" << "\t\tЦіна" << "\tІД\n";
	while (!in.eof())/////////////////////////////////////////////////////// Читання файла з послугами
	{
		if (in.is_open()) {////////////////////////////////////////////////// з файла в консоль
			in >> name_poslug;
			in >> price;
			in >> id_r;
			cout << name_poslug << "\t\t" << price << "\t" << id_r;
		}
		else//////// якщо не відкрився файл 
		{
			cout << "\nEror 1";
		}
		cout << "\n";
	}
	in.close();//////////////////////////////////////////////////////////// закриття файла читання
	std::cin.get();
}

void Poslugu::choose_poslug()
{
	show_poslug();
	cout << "\nВиберіть Послуги. Для того щоб вибрати послугу введіть ід послуг  ";
	int zap = 0;//////////////////////////////////////////////////////////////////////////////// для заповнення вектора
	while (true)
	{
		cin >> zap;
		if (zap == 99)
			break;
		choose_id.push_back(zap);
	}
	int i = 0;
	ofstream out_poslug;
	ifstream in;
	out_poslug.open("vubrani_poslugu.txt");/////////////////////////// Відкриття файлу з вибраними послугами
	in.open("poslug1.txt");
	while (!in.eof())
	{
		in >> name_poslug;
		in >> price;
		in >> id_r;
		for (int i = 0; i < choose_id.size(); i++) {/////////////////////////// Запис в файл вибраних товарів
			if (choose_id[i] == id_r)
				out_poslug << name_poslug << "\t" << price << "\t" << id_r << "\n";
		}

	}
	out_poslug.close();
	in.close();

}

void Poslugu::option_poslug()
{
	cout << "\nСписок послуг \t- 1\n" << "Додати послугу \t- 2\n" << "Видалити послугу - 3\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		show_poslug();
		break;
	}
	case 2: {
		fstream in;//////////////////////////////////////////////////////////// Обєкт читання
		in.open("poslug1.txt", ios::app);
		if (in.is_open()) {
			cout << "\nВведіть назву послуги\n";
			cin >> name_poslug;
			cout << "\nВведіть ціну послуги\n";
			cin >> price;
			cout << "\nВведіть ід послуги\n";
			cin >> id_r;
			in << "\n" << name_poslug << "\t" << price << "\t" << id_r;
		}
		else
		{
			cout << "\nEror 1";
		}
		cout << "\n";
		break;
	}
	case 3: {
		delete_poslug();
		break;
	}


	default:
		break;
	}
}

int Poslugu::size_poslug()
{
	ifstream inw;
	inw.open("poslug1.txt");
	int index = 0;
	string tri;
	while (!inw.eof())
	{
		inw >> tri;
		inw >> tri;
		inw >> tri;
		index++;
	}
	inw.close();
	return index;
}

void Poslugu::delete_poslug()
{
	show_poslug();
	cout << "\nВведіть ід людини яких потрібно звільнити\n";
	int f;
	while (true)
	{
		cin >> f;
		if (f == 99) {
			break;
		}
		id_d.push_back(f);
	}
	ifstream inn;
	inn.open("poslug1.txt");
	int index = size_poslug();
	vector<poslug> myposlug(index);
	for (size_t i = 0; i < index; i++)
	{
		inn >> myposlug[i].name;
		inn >> myposlug[i].price;
		inn >> myposlug[i].id;

	}
	myposlug.erase(myposlug.begin() + (id_d[0] - 1));
	ofstream out;
	out.open("poslug1.txt");
	for (size_t i = 0; i < index - 2; i++)
	{
		out << myposlug[i].name << "\t" << myposlug[i].price << "\t" << myposlug[i].id << endl;
	}
	int d = index - 2;
	out << myposlug[d].name << "\t" << myposlug[d].price << "\t" << myposlug[d].id;
	inn.close();
}

