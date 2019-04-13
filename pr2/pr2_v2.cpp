#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	double a = -0.6;
	double b = 5.3;
	double z, t;
	if (a < b)
	{
		z = sqrt(abs(a*a - b*b));
	}
	else
	{
		z = 1 - (2 * cos(a)*sin(b));
	}
	cout << "z = " << z << endl;
	if (z < b)
	{
		t = pow((z + a * a*b), 1 / 3);
	}
	else if (z == b)
	{
		t = 1 - log10(z) + cos(a*a*b);
	}
	else
	{
		t = 1 / (cos(z*a));
	}
	cout << "t = " << t << endl;
	_getch();
	return 0;
}