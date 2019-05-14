#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
struct book {
	int date;
	int str;
	string name;
	string avtor;
};
struct student {
	string name;
	int date;
	int bal;
};
struct car {
	int date;
	int cash;
	string marka;
	string model;
};
struct koord {
	int x;
	int y;
};
struct vettor {
	koord lol1;
	koord lol2;
};
struct biblioteque {
	int year;
	string name;
	int kolvo;
	book books[100];
};

int main() {
	int a;
	book kek;
	car pocar;
	vettor skyfall;
	student st[50];
	biblioteque biblio;
	setlocale(0, "rus");
	cout << "Выберите вариант: " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Имя автора: " << endl;
		cin.get();
		getline(cin, kek.avtor);
		cout << "Название книги: " << endl;
		getline(cin, kek.name);
		cout << "Год: " << endl;
		cin >> kek.date;
		cout << "Количество страниц: " << endl;
		cin >> kek.str;
		cout << kek.name << " " << kek.avtor << " " << kek.date << " " << kek.str;
		break;
	case 2:
		cout << "Введите количество студентов: " << endl;
		cin >> a;
		for (int i = 0; i < a; i++) {
			cout << "Имя: " << endl;
			cin.get();
			getline(cin, st[i].name);
			cout << "Год рождения: " << endl;
			cin >> st[i].date;
			cout << "Средний балл: " << endl;
			cin >> st[i].bal;
			cout << st[i].name << " " << st[i].date << " " << st[i].bal << endl;
		}
		break;
	case 3:
		cout << "Марка авто: " << endl;
		cin.get();
		getline(cin, pocar.marka);
		cout << "Модель: " << endl;
		getline(cin, pocar.model);
		cout << "Год выпуска: " << endl;
		cin >> pocar.date;
		cout << "Цена: " << endl;
		cin >> pocar.cash;
		cout << pocar.marka << " " << pocar.model << " " << pocar.date << " " << pocar.cash;
		break;
	case 4:
		cout << "Координаты первой точки: " << endl;
		cin >> skyfall.lol1.x;
		cin >> skyfall.lol1.y;
		cout << "Координаты второй точки: " << endl;
		cin >> skyfall.lol2.x;
		cin >> skyfall.lol2.y;
		cout << skyfall.lol1.x << " " << skyfall.lol1.y << " " << skyfall.lol2.x << " " << skyfall.lol2.y << " " << endl;
		break;
	case 5:
		cout << "Название библиотеки: " << endl;
		cin.get();
		getline(cin, biblio.name);
		cout << "Год основания: " << endl;
		cin >> biblio.year;
		cout << "Кол-во книг: " << endl;
		cin >> biblio.kolvo;
		for (int i = 0; i < biblio.kolvo; i++) {
			cout << "Имя автора: " << endl;
			cin.get();
			getline(cin, biblio.books[i].avtor);
			cout << "Название книги: " << endl;
			getline(cin, biblio.books[i].name);
			cout << "Год: " << endl;
			cin >> biblio.books[i].date;
			cout << "Количество страниц: " << endl;
			cin >> biblio.books[i].str;
			cout << biblio.books[i].name << " " << biblio.books[i].avtor;
			cout << " " << biblio.books[i].date << " " << biblio.books[i].str << endl;
		}
		break;
	}
}
