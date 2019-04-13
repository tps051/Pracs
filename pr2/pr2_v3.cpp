#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	double a = 4.6;
	double b = 1.5;
	double y, t;
	if (a > b)
	{
		y = a + log(b*b);
	}
	else
	{
		y = ((a - b) / (a + b)) * ((a + b) / (a*a - a * b + b * b));
	}
	cout << "y = " << y << endl;
	if (y == b)
	{
		t = (2 * y + sqrt(y*y - a))/(2*b - sqrt(a*a - y));
	}
	else if (y < b)
	{
		t = pow(sin(y), 2) + (1 / tan(a - b));
	}
	else
	{
		t = pow((y*sin(a)), 1 / 3) + 1 / (sqrt(y*cos(b)));
	}
	cout << "t = " << t << endl;
	_getch();
	return 0;
}
