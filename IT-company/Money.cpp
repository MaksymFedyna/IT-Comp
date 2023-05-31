#include "Money.h"

Money::Money()
{
}

Money::Money(int price) :price(price)
{
}

Money::~Money()
{
}

void Money::oplat_poslugu()
{
	ifstream in_sum;
	int all_by = 0;
	in_sum.open("vubrani_poslugu.txt");///////////////////////////// відкриття файлу
	cout << "\nВибрані послуги:\n";
	cout << "Послуга\t" << "\tЦіна" << "\tІД\n";
	while (!in_sum.eof())//////////////////////////////////////////// Зчитування файлу
	{
		in_sum >> name_poslug;
		in_sum >> price;
		in_sum >> id_r;
		if (in_sum.eof())
			break;
		cout << name_poslug << "\t\t" << price << "\t" << id_r << "\n";/////////////// вивід послуг і рахування всієї суми за послуги
		all_by += price;

	}
	gomoney = all_by;
	cout << "\n\nВибрані послуги обійдуться вам в " << all_by;
	if (balance >= gomoney) {/////////////////////////////////////////////// Провірка на наявність грошей
		cout << "\nХочете оплатити послуги зараз" << "\nТак - 1" << "\nНі  - 2\n";
		int cho;
		cin >> cho;
		switch (cho)////////////////////////////////// Вибір оплати
		{
		case 1:
		{
			cout << "\n\nВи успішно оплатили послуги.\nДякуємо що скористалися нашими послугами.";
			balance -= all_by;
			cin.get();
			break;
		}
		case 2:
		{
			break;
		}
		default:
			break;
		}
	}
	else
	{
		cout << "\nСпочатку поповніть баланс";
		cin.get();
	}

}

void Money::Gamanec()
{
	cout << "\nПереглянути баланс \t- 1" << "\nПоповнити баланс \t- 2\n";
	int chose;
	cin >> chose;
	switch (chose)
	{
	case 1:
	{
		cout << "\nВаш баланс на даний  момент становить - " << balance;
		cin.get();
		break;
	}
	case 2: {
		cout << "\nВведіть суму на яку хочете поповнити свій баланс - ";
		int a;
		cin >> a;
		balance += a;
		cin.get();
		break;
	}
	default:
		break;
	}
}

void Money::bygalt()
{
	cout << "\nДохід перукарні - 1\n" << "Вивести дохід \t- 2";
	int a;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "\nЧистий дохід = " << (gomoney - (gomoney * 100) / 80) * -1;
		cin.get();
		break;
	}
	case 2: {
		cout << "\nВи можете вивести = " << gomoney - (gomoney * 100) / 80;
		cout << "\nВведіть суму для виводу - ";
		int a;
		cin >> a;
		cout << "\nВи вивели - " << a << "  Залишилося - " << gomoney - (gomoney * 100) / 80 - a;
		cin.get();
		break;
	}
	default:
		break;
	}
}

int Money::getprice()
{
	return price;
}
