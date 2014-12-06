// operators

#include <iostream>
using namespace std;

int main ()
{
	int a; //note: just to int x once-- you can only declare things once
	a = 1;
	cout << "a = ";
	cout << a;
	cout << endl;
	a = 2; 
	cout << "a = ";
	cout << a;
	cout << endl;
	a = 3; 
	cout << "a = ";
	cout << a;
	cout << endl;
	a += 1; //a increased by one
	cout << "a increased by 1: ";
	cout << a;
	cout << endl;
	a -= 4; //a decreased by four
	cout << "a decreased by 4: ";
	cout << a;
	cout << endl;
	a += 2;
	cout << "a increased by 2 :";
	cout << a;
	cout << endl;
	a /= 2; //a divided by 2
	cout << "a divided by 2 (should be 1): ";
	cout << a;
	cout << endl;
	a++; // this should increase by one
	cout << "a plus plus: ";
	cout << a;
	cout << endl;
	a--;
	cout << "a minus minus: ";
	cout << a;
	cout << endl;
	a = 1;
	int b (1);
	a = b++;
	cout << "a should equal 2: ";
	cout << a;
	cout << b;
	a = 1;
	b = 1;
	a = ++b;
	cout << endl;
	cout << "a equals: ";
	cout << a;
	return 0;
}
	
	
	
	