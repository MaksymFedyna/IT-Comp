#include "ITcompany.h"

ITcompany::ITcompany(string name, string adress):name(name),adress(adress)
{
}

ITcompany::~ITcompany()
{
}

void ITcompany::show_adress()
{
	cout << "\n������� ����������� �� " << adress;
}

void ITcompany::option_adress_ad()
{
	cout << "\n�������� ������������ \t- 1" << "\n������ ������������ \t- 2\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "\n���� ������� ����������� �� ������ " << adress;
		cin.get();
		break;
	}
	case 2: {
		cout << "\n������ ���� ������ ��-������\n";
		cin >> adress;
		cout << "\n������ ������ ������";
		cin.get();
		break;
	}
	default:
		cout << "\n������ ���� �����\n";
		break;
	}
}

void ITcompany::option_name_ad()
{
	cout << "\n����������� ����� ������ \t- 1" << "\n������ ����� ������ \t- 2\n";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "\n����� ������ " << name;
		cin.get();
		break;
	}
	case 2: {
		cout << "\n�������� ���� ����� �����\n";
		cin >> name;
		cout << "\n����� ������ ������";
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
