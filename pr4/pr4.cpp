#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <locale.h>
using namespace std;

double* delanie_massiva(int *razmer) {
	if (*razmer = 0) {
		return 0;
	}
	else {
		cout << "Введите желаемый размер массива: ";
		cin >> *razmer;
		double *mass = new double[*razmer];
		return mass;
	}
}
double* zapolnenie(int razmer, double *array) {
	for (int i = 0; i < razmer; i++) {
		cin >> array[i];
	}
	return array;
}
double* vipisivanie(int razmer, double *array) {
	for (int i = 0; i < razmer; i++) {
		cout <<"a["<<i<<"]="<< array[i]<<endl;
	}
	return array;
}
double* ydalenie(int *razmer, double *array) {
	*razmer = 0;
	delete[] array;
	array = 0;
	return array;
}
int* perestanovka(int *array) {
	for (int i = 0; i < 12; i = i + 2) {
		swap(array[i], array[i + 1]);
	}
	return array;
}

int main()
{
	setlocale(0, "rus");
	srand(time(0));
	double *mass;
	double kek;
	int str,stolb;
	mass = &kek;
	int razmer = 0;
	int zadanie;
	bool pravda = true;
	int a,q;
	int** mass3 = new int*[10];
	int* mass2 = new int[12];
	cout << "Выберите вариант: ";
	cin >> zadanie;
	switch (zadanie) {
	case 1:
	cout << "Выберите операцию: \n 1)Выделить память \n 2)Заполнить массив \n 3)Вывести массив \n 4)Удалить массив \n 5)Выйти " << endl;
		while (pravda) {
			cout << "Операция №: ";
			cin >> a;
			switch (a) {
			case 1:
				mass = &kek;
				mass = delanie_massiva(&razmer);
				break;
			case 2:
				mass = zapolnenie(razmer, mass);
				break;
			case 3:
				mass = vipisivanie(razmer, mass);
				break;
			case 4:
				mass = ydalenie(&razmer, mass);
				break;
			case 5:
				pravda = false;
				break;
			}
		}
		break;
	case 2:
		for (int i = 0; i < 12; i++) {
			mass2[i] = rand() % 100;
			cout << mass2[i] << " ";
		}
		cout << endl;
		mass2 = perestanovka(mass2);
		cout << "Swap: " << endl;
		for (int i = 0; i < 12; i++) {
			cout << mass2[i] << " ";
		}
		cout << endl;
		break;
	case 3:
		cout << "Введите кол-во строк: ";
		cin >> str;
		cout << "Введите кол-во столбцов: ";
		cin >> stolb;
		for (int i = 0; i < str; i++) {
			mass3[i] = new int[str];
		}
		for (int i = 0; i < str; i++) {
			for (int l = 0; l < stolb; l++) {
				mass3[i][l] = rand() % 40 + 10;
				cout << mass3[i][l] << " ";
			}
			cout << endl;
		}
		break;
	}
	delete[]mass3;
	delete[]mass2;
}
