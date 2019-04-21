#include <iostream>
#include <cmath>
using namespace std;

class function {
public:
	virtual void print_f() = 0;
	virtual float result(float x) = 0;
	virtual void dx() = 0;
	virtual function* copy() = 0;
};

class constant :public function {
	void print_f() 
	{ 
		cout << "f(x) = �onst" << endl;
	}
	float result(float x) 
	{ 
		return 1; 
	}
	void dx() 
	{ 
		cout << "dx = 0" << endl;
	}
	function* copy() 
	{
		function* f = new constant;
		return f;
	}
};
class peremen :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = x" << endl; 
	}
	float result(float x) 
	{ 
		return x; 
	}
	void dx() 
	{ 
		cout << "dx = 1" << endl; 
	}
	function* copy() 
	{
		function* f = new peremen;
		return f;
	}
};
class symm :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = x^2 + 200x" << endl; 
	}
	float result(float x) 
	{ 
		return pow(x, 2) + 200 * x; 
	}
	void dx() 
	{ 
		cout << "dx = 2x + 200"; 
	}
	function* copy() 
	{
		function* f = new symm;
		return f;
	}
};
class razn :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = x^2 - x^3" << endl; 
	}
	float result(float x) 
	{ 
		return pow(x, 2) - pow(x, 3); 
	}
	void dx() 
	{ 
		cout << "dx = 2x - 3x^2"; 
	}
	function* copy() 
	{
		function* f = new razn;
		return f;
	}
};
class um :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = x^2 * ln(x)" << endl; 
	}
	float result(float x) 
	{ 
		return pow(x, 2)*log(x); 
	}
	void dx() 
	{ 
		cout << "dx = 2x * lnx + x"; 
	}
	function* copy() 
	{
		function* f = new um;
		return f;
	}
};
class delit :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = x^2 / (2^x)" << endl; 
	}
	float result(float x) 
	{ 
		return pow(x, 2) / pow(2, x); 
	}
	void dx() 
	{ 
		cout << "dx=(2x * 2^(x) - x^(2) * 2^(x)ln2) / 2^(2x)";
	}
	function* copy() 
	{
		function* f = new delit;
		return f;
	}
};
class sinys :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = sin(x)" << endl; 
	}
	float result(float x) 
	{ 
		return sin(x); 
	}
	void dx() 
	{ 
		cout << "dx = cos(x)"; 
	}
	function* copy() 
	{
		function* f = new sinys;
		return f;
	}
};
class cosinys :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = cos(x)" << endl; 
	}
	float result(float x) 
	{ 
		return cos(x); 
	}
	void dx() 
	{ 
		cout << "dx = -sin(x)"; 
	}
	function* copy() 
	{
		function* f = new cosinys;
		return f;
	}
};
class expon :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = exp^x" << endl; 
	}
	float result(float x) 
	{ 
		return exp(x); 
	}
	void dx() 
	{ 
		cout << "dx = exp^x"; 
	}
	function* copy() 
	{
		function* f = new expon;
		return f;
	}
};
class logar :public function 
{
	void print_f() 
	{ 
		cout << "f(x) = ln(x)" << endl; 
	}
	float result(float x) 
	{ 
		return log(x); 
	}
	void dx() 
	{ 
		cout << "dx = 1/x"; 
	}
	function* copy() 
	{
		function* f = new logar;
		return f;
	}
};