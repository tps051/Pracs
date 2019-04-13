#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	double a = 3.5;
	double x = -0.7;
	double y, t;
	if (a > x)
	{
		y = sqrt(sin(a*x));
	}
	else
	{
		y = a + log(x + a);
	}
	cout << "y = " << y << endl;
	if (a > y)
	{
		t = y / (a - x);
	}
	else if (a == y)
	{
		t = (y / (a - x)) + ((a + x) / (y*y));
	}
	else
	{
		t = tan(a*x) + cos(2*a*y);
	}
	cout << "t = " << t << endl;
	_getch();
	return 0;
}
