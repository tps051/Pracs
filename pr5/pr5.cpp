#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
template <typename T>
T symm(T a, T b) {
	return a + b;
}
template <typename razn1>
razn1 razn(razn1 a, razn1 b) {
	return a - b;
}
template <typename del>
del delit(del a, del b) {
	return a / b;
}
template<typename umnoj>
umnoj um(umnoj a, umnoj b) {
	return a * b;
}
template<typename T>
T raspred(T a, T b) {
	cout << "Выберите операцию: \n1 - сложить \n2 - вычесть \n3 - делить \n4 - умножить\n" << endl;
	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << symm(a, b);
		break;
	case 2:
		cout << razn(a, b);
		break;
	case 3:
		cout << delit(a, b);
		break;
	case 4:
		cout << um(a, b);
		break;
	}
	return 0;
}
template<typename T>
void vivod(T mass, int razmer) {
	for (int i = 0; i < razmer; i++) {
		cout << mass[i] << " ";
	}
}
template<typename puzirek1>
puzirek1 puzirek(puzirek1 mass, int razmer) {
	bool ult = true;
	while (ult != false) {
		ult = false;
		for (int q = 0; q < razmer - 1; q++) {
			if (mass[q] > mass[q + 1]) {
				swap(mass[q], mass[q + 1]);
				ult = true;
			}
		}
	}
	return mass;
}
template<typename vib>
vib vibor(vib mass, int razmer) {
	double min = 1000.0;
	int numir = 0;
	for (int i = 0; i < razmer; i++) {
		for (int q = i; q < razmer; q++) {
			if (mass[q] < min) {
				min = mass[q];
				numir = q;
			}
		}
		swap(mass[i], mass[numir]);
		min = 1000;
	}
	return mass;
}
template<typename vib>
vib vstavka(vib mass, int razmer) {
	int j, q;
	for (int i = 1; i < razmer; i++) {
		j = i - 1;
		q = i;
		while (mass[q] < mass[j] && j >= 0 && q>0) {
			swap(mass[q], mass[j]);
			j--;
			q--;
			if (j == -1)break;
		}
	}
	return mass;
}
int main()
{
	setlocale(0, "rus");
	srand(time(0));
	int a, b, num, razmer, ex;
	double x, y;
	float c, d;
	vector <double> mass;
	vector <int> array;
	cout << "Выберите вариант: " << endl;
	cin >> ex;
	if (ex >= 1 && ex <= 3) {
		cout << "Размер массива: " << endl;
		cin >> razmer;
		mass.resize(razmer);
		array.resize(razmer);
		for (int i = 0; i < razmer; i++) {
			mass[i] = (rand() % 1000 - 500) / 10.0;
			array[i] = rand() % 100 - 50;
		}
	}
	switch (ex) {
	case 1:
		array = puzirek(array, razmer);
		vivod(array, razmer);
		cout << endl << endl;
		mass = puzirek(mass, razmer);
		vivod(mass, razmer);
		break;
	case 2:
		array = vibor(array, razmer);
		vivod(array, razmer);
		cout << endl << endl;
		mass = vibor(mass, razmer);
		vivod(mass, razmer);
		break;
	case 3:
		array = vstavka(array, razmer);
		vivod(array, razmer);
		cout << endl << endl;
		mass = vstavka(mass, razmer);
		vivod(mass, razmer);
		break;
	case 4:
		cout << "Выберите тип данных: \n1 - int\n2 - float\n3 - double)" << endl;
		cin >> num;
		cout << "Введите 2 числа: " << endl;
		switch (num) {
		case 1:
			cin >> a >> b;
			raspred(a, b);
			break;
		case 2:
			cin >> c >> d;
			raspred(c, d);
			break;
		case 3:
			cin >> x >> y;
			raspred(x, y);
			break;
		}
		break;
	}
}
