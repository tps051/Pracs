#include <iostream>
#include <string>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

using namespace std;

bool chk(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if ((int(str[i]) > 64) && (int(str[i]) < 123))
		{
			count++;
		}
	}
	if (count == str.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string str;
	int kkk = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Vvedite vashe imya: ";
	cin >> str;

	if (chk(str) == false)
	{	
		throw 0;
	}

	else
	{
		cout << "Privet, " << str << endl;
	}

	_getch();
	cin.get();
	return 0;
}