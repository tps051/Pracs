#include <iostream>
#include <conio.h>
using namespace std;

class Property {
protected:
	double worth;
public:
	Property() { };
	virtual double db() {
		return 0;
	};
};
class apartment :public Property {
public:
	apartment(double wtrh) { worth = wtrh; }
	double db() {
		return worth / 1000;
	}
};
class car :public Property {
public:
	car(double wtrh) { worth = wtrh; };
	double db() {
		return worth / 200;
	}
};
class CountryHouse :public Property {
public:
	CountryHouse(double wtrh) { worth = wtrh; };
	double db() {
		return worth / 500;
	}
};
int main()
{
	Property **imushestvo = new Property*[7];
	double mass[7];
	for (int i = 0; i < 7; i++) {
		cin >> mass[i];
	}
	imushestvo[0] = new apartment(mass[0]);
	imushestvo[1] = new apartment(mass[1]);
	imushestvo[2] = new apartment(mass[2]);
	imushestvo[3] = new car(mass[3]);
	imushestvo[4] = new car(mass[4]);
	imushestvo[5] = new CountryHouse(mass[5]);
	imushestvo[6] = new CountryHouse(mass[6]);
	for (int i = 0; i < 7; i++) {
		cout << imushestvo[i]->db() << endl;
	}
	_getch();
	return 0;

}