#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class transport {
public:
	transport() {
		cout << "transport: ";
	}
};
class car :public transport {
public:
	car() {
		cout << "car ";
	}
};
class bus :public transport {
public:
	bus() {
		cout << "bus ";
	}
};
class velo :public transport {
public:
	velo() {
		cout << "velo ";
	}
};
int main()
{
	car car1;
	cout << endl;
	bus bus1;
	cout << endl;
	velo vel1;

	cout << endl << endl;
	_getch();
	return 0;
}