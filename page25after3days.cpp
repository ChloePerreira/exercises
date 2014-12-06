//trying operators and conditional operator one more time

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int a, b;
	bool c;
	a = 10;
	b = 20;
	c = (a!=b);
	cout << "Is a not equal to c?" << endl;
	cout << c << endl;
	string d ((b>a) ? "Yes" : "No");
	cout << "Is b greater than a?" << endl;
	cout << d;
	return 0;
}
	