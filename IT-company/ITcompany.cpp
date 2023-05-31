#include "ITcompany.h"

ITcompany::ITcompany(string name, string adress):name(name),adress(adress)
{
}

ITcompany::~ITcompany()
{
}

void ITcompany::show_adress()
{
	cout << "\nКомпанія розташована на " << adress;
}

void ITcompany::option_adress_ad()
{
	cout << "\nПоказати розташування \t- 1" << "\nЗмінити розташування \t- 2\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "\nНаша компанія знаходиться на вулиці " << adress;
		cin.get();
		break;
	}
	case 2: {
		cout << "\nВведіть нову вулицю ІТ-компанії\n";
		cin >> adress;
		cout << "\nВулиця успішно змінена";
		cin.get();
		break;
	}
	default:
		cout << "\nВведіть інше число\n";
		break;
	}
}

void ITcompany::option_name_ad()
{
	cout << "\nПереглянути назву компанії \t- 1" << "\nЗмінити назву компанії \t- 2\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "\nНазва компанії " << name;
		cin.get();
		break;
	}
	case 2: {
		cout << "\nНапишіть нову назву команії\n";
		cin >> name;
		cout << "\nНазву успішно змінена";
		break;
	}
	default:
		break;
	}
}

string ITcompany::get_Name()
{
	return name;
}
