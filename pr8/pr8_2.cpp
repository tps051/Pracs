#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	ofstream f1;
	string s;
	f1.open("new.txt");
	cout << "Vvedite tekst: " << endl;
	getline(cin, s);
	f1 << s;
	f1.close();
	_getch();
	return 0;
}