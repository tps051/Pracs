#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	float a = 4.8;
	float b = -7.9;
	float n, m;

	if (a >= b)
	{
		n = pow(a - b, 1.0 / 3);
	}
	if (a < b)
	{
		n = pow(a, 2) + ((a - b) / sin(a*b));
	}
	cout << "n = " << n << endl;
	if (n < b)
	{
		m = ((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n));
	}
	if (n = b)
	{
		m = pow(b, 2) + (sin(n*a)/cos(n*a));
	}
	if (n > b)
	{
		m = pow(b, 3) + (n * pow(a,2));
	}
	cout << "m = " << m << endl;
	_getch();
	return 0;
}