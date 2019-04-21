#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class figura 
{
public:
	figura() 
	{
		cout << "figure: ";
	}
};
class quadangle :public figura 
{
public:
	quadangle() 
	{
		cout << "quad-angle: ";
	}
};
class romb :public quadangle 
{
public:
	romb() 
	{
		cout << "romb";
	}
};
class rectangle :public quadangle 
{
public:
	rectangle() 
	{
		cout << "rectangle";
	}
};
int main()
{
	figura figur;
	cout << endl;
	quadangle quad;
	cout << endl;
	romb kok;
	cout << endl;
	rectangle orbidol;
	cout << endl << endl;
	_getch();
	return 0;
}