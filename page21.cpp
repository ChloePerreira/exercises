//the assignment operator: '='

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string thing1, thing2;
	thing1 = "blue"; // " is only for strings!
	thing2 = "red";
	cout << "Right now thing 1 is: ";
	cout << thing1; 
	cout << endl;
	cout << "And right now thing 2 is: ";
	cout << thing2;
	cout << endl;
	thing1 = "green";
	thing2 = thing1;
	cout << "But now, thing 1 is: ";
	cout << thing1;
	cout << endl;
	cout << "And thing 2 is: ";
	cout << thing2;
	cout << "\nNote that changing what things are equal to doesn't retroactively change things.";
	cout << "\nBlah\nBlah blah";
	return 0; 
}