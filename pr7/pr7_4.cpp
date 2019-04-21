#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class keyboard 
{
protected:
	bool sensor;
};
class screen 
{
protected:
	int dlina;
	int shirina;
};
class tele :public keyboard, public screen 
{
public:
	tele() 
	{
		sensor = true;
		dlina = 800;
		shirina = 600;
		cout << "Telephone: " << endl;
		cout << "	Length: " << dlina << " mm"<< endl;
		cout <<	"	Width: " << shirina << " mm" << endl;
		cout << "	Sensor: " << sensor << endl;
	}
};
class notebook :public keyboard, public screen {
public:
	notebook() {
		sensor = false;
		dlina = 2400;
		shirina = 1600;
		cout << "Notebook: " << endl;
		cout << "	Length: " << dlina << " mm" << endl;
		cout << "	Width: " << shirina << " mm" << endl;
		cout << "	Sensor: " << sensor << endl;
	}
};
class comp :public keyboard, public screen 
{
public:
	comp() {
		sensor = false;
		dlina = 5000;
		shirina = 8000;
		cout << "Computer: " << endl;
		cout << "	Length: " << dlina << " mm" << endl;
		cout << "	Width: " << shirina << " mm" << endl;
		cout << "	Sensor: " << sensor << endl;
	}
};
int main()
{
	tele tel1;
	comp pc;
	notebook note;
	_getch();
	return 0;
}