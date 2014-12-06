#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	string stringy ("this is empty");
	int inty = 0;
	float decy = 0;
	cout << "Enter a number: ";
	getline (cin, stringy);
	stringstream(stringy) >> inty;
	cout << inty;
	cout << "Trying again.";
	string a ("123");
	cout << a << endl;
	int b;
	stringstream(a) >> b;
	cout << b << endl;
	return 0;
}
