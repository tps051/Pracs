#include <ctime>
#include <iostream>
using namespace std;

double* delanie_massiva(int *razmer) {
	if (*razmer != 0) {
		return 0;
	}
	else {
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
		cout << array[i];
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
	mass = &kek;
	int razmer = 0;
	int zadanie;
	bool pravda = true;
	int a;
	int** mass3 = new int*[10];
	int* mass2 = new int[12];
	cin >> zadanie;
	switch (zadanie) {
	case 1:
		while (pravda) {
			cout << "Выберите вариант: " << endl;
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
		for (int i = 0; i < 12; i++) {
			cout << mass2[i] << " ";
		}
		break;
	case 3:
		for (int i = 0; i < 10; i++) {
			mass3[i] = new int[10];
		}
		for (int i = 0; i < 10; i++) {
			for (int q = 0; q < 10; q++) {
				mass3[i][q] = rand() % 40 + 10;
				cout << mass3[i][q] << " ";
			}
			cout << endl;
		}
		break;
	}
	delete[]mass3;
	delete[]mass2;
}
