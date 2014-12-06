//defined constants with GPA

#include <iostream>
using namespace std;

#define a 4.0 //adding the .0 here will make it so that when it calculates gpa, it gives a decimal
#define b 3.0
#define c 2.0

int main ()
{
	double gpa; //if you switch this to int instead of double it won't give a decimal bc its not an int
	int classes (4);
	gpa = (a + b + c + a)/classes;
	cout << gpa;
	return 0;
}