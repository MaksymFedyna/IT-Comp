
#include <iostream>
#include "Money.h"
#include "Profesion.h"
#include "ITcompany.h"
#include "Poslugu.h"
#include "Admin.h"
#include <iostream>
using std::cout;
using std::cin;
void firstmenu() {
    cout << "\nВведіть цифру для входу в режими:\n";
    cout << "Адміністратор\t - 1" << "\nКористувач\t - 2" << "\nВихід\t\t - 3\n";
}
void adminmenu() {
    cout << "\nПопереднє меню\t\t - 1" << "\nРозташування\t\t - 2" << "\nНазва ІТ-компанії\t - 3" << "\nПерсонал\t\t - 4" << "\nБухгалтерія компанії\t - 5" << "\nУправління Послугами\t - 6\n" << "Змінити пароль\t\t - 7\n";
}
void usermenu() {
    cout << "\nПопереднє меню\t - 1" << "\nРозташування\t - 2" << "\nСписок послуг\t - 3" << "\nВибрати послуги\t - 4" << "\nОплатити послуги - 5" << "\nГаманець \t - 6\n";
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ITcompany com("Software", "вулиця Тараса Шевченка, 77, Львів, Львівська область, 89020");
    Admin adm("koly", 1111);
    int password = adm.getpass(), pas_chek;
    int chose = 0;
    bool whil = true;
    while (whil)
    {
    tr:
        firstmenu();
        cin >> chose;
        system("cls");
        switch (chose)
        {
        case 1: {
            cout << "\nВведіть пароль для входу - ";
            cin >> pas_chek;
            if (password == pas_chek) {
            a:
                adminmenu();/////////////////////////// ADMIN
                cin >> chose;
                switch (chose)
                {
                case 1: {//////////////////////////////// Попереднє меню
                    system("cls");
                    break;
                }
                case 2: {/////////////////////////////////Розташування
                    com.option_adress_ad();
                    cin.get();
                    system("cls");
                    goto a;
                    break;
                }
                case 3: {////////////////////////////////Назва перукарні
                    com.option_name_ad();
                    cin.get();
                    system("cls");
                    goto a;
                    break;
                }
                case 4: {////////////////////////////////Персонал
                    adm.prac();
                    cin.get();
                    system("cls");
                    goto a;
                    break;
                }
                case 5: {////////////////////////////////Бухгалтерія company
                    adm.bygalt();
                    cin.get();
                    system("cls");
                    goto a;
                    break;
                }
                case 6: {/////////////////////////////// Послуги
                    adm.option_poslug();
                    cin.get();
                    system("cls");
                    goto a;
                    break;
                }
                case 7: {
                    cout << "\nВедіть новий пароль ";
                    int a;
                    cin >> a;
                    adm.setpass(a);
                    password = adm.getpass();
                    break;
                }
                default:
                    cout << "\nВведіть інше число";
                    break;
                }
                break;
            }
            else {
                cout << "\nнеправильний пароль";
                cin.get();
                system("cls");
                goto tr;
            }
        }
        case 2: {///////////// USER CASE
        n:
            usermenu();
            cin >> chose;
            switch (chose)
            {
            case 1: {/////////// Попереднє мню

                system("cls");
                break;
            }
            case 2: {///////////   Розташування
                com.show_adress();
                cout << "\nІмя ІТ-команії " << com.get_Name();
                Sleep(3500);
                cin.get();
                system("cls");
                goto n;
                break;
            }
            case 3: {////////////// Послуги
                com.show_poslug();
                cin.get();
                system("cls");
                goto n;
                break;
            }
            case 4: {////////////// вибрати послуги
                com.choose_poslug();
                cin.get();
                system("cls");
                goto n;
                break;
            }
            case 5: {////////////// Оплатити Послуги
                com.oplat_poslugu();
                cin.get();
                system("cls");
                goto n;
                break;
            }
            case 6: {/////////////// Гаманець
                com.Gamanec();
                cin.get();
                system("cls");
                goto n;
                break;
            }
            default:
                cout << "\nВведіть інше число";
                break;
            }
            break;
        }
        case 3: {
            whil = false;
            break;
        }
        default:
            cout << "\nВведіть інше число";
            break;
        }
    }
}

