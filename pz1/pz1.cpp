

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
    int main() {
        system("color B1");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
       
        // Прізвище
        string last_name;
        cout << "Введіть прізвище: ";
        getline(cin, last_name);

        // Ім'я
        string first_name;
        cout << "Введіть ім’я: ";
        getline(cin, first_name);

        // Вік
        int age;
        cout << "Введіть вік: ";
        cin >> age;

        // Рік народження
        int birth_year;
        cout << "Введіть свій рік народження: ";
        cin >> birth_year;

        // Очищуємо буфера після введення числа
        cin.ignore();

        // країна в якій проживаєш
        string country;
        cout << "Країна, в якій проживаєш: ";
        getline(cin, country);

        // Назва спеціальності
        string specialty;
        cout << "Введіть назву спеціальності: ";
        getline(cin, specialty);

        // Курс
        int course;
        cout << "Введіть курс: ";
        cin >> course;

        // Скільки у групі студентів
        int group_size;
        cout << "Скільки у групі студентів: ";
        cin >> group_size;

        // Вивід введених даних
        cout << "\nВаші дані " << endl;
        cout << "Прізвище: " << last_name << endl;
        cout << "Ім'я: " << first_name << endl; 
        cout << "Вік:  " << age << endl; 
        cout << "Рік народження: " << birth_year << endl;
        cout << "Країна в якій проживаєш: " << country << endl;
        cout << "Назва спеціальності:  " << specialty << endl;
        cout << "Курс " << course << endl;
        cout << "Скільки у групі студентів: " << group_size << endl;
        return 0;
    }