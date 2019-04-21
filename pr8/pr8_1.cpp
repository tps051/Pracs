#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	ofstream f1;
	ifstream f2;
	f2.open("new.txt");
	if (f2.is_open()) {
		string s;
		while (!f2.eof()) {
			f2 >> s;
			cout << s << endl;
		}
		f2.close();
	}
	else {
		cout << "Creating of file..." << endl;
		f1.open("new.txt");
		f1.close();
	}
	_getch();
	return 0;
}