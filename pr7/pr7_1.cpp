#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class animals 
{
protected:
	string name;
	int weight;
public:
	animals() 
	{
		cout << "animals: ";
	}
};
class cat :public animals 
{
public:
	cat() 
	{
		name = "Bob";
		weight = 5;
		cout << "Cat " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
class parrot :public animals 
{
public:
	parrot() 
	{
		name = "Krol";
		weight = 1;
		cout << "Parrot " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
class dog :public animals 
{
public:
	dog() {
		name = "Sharik";
		weight = 15;
		cout << "Dog " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
int main()
{
	dog sobaken;
	cat kitik;
	parrot popug;
	_getch();
	return 0;
}