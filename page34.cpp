//testing if

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	string bird;
	string color;
	string string;
	int number;
	cout << "Name a common Bay Area bird: " << endl;
	getline (cin, bird);
	cout << "What color are " << bird << "s?" << endl;
	getline (cin, color);
	cout << "How many " << bird << "s have you seen today?" << endl;
	getline (cin, string);
	stringstream (string) >> number;
	cout << "You saw at least " << number << " " << color << " birds today." << endl;
	if (color == "brown") cout << "Brown birds are common." << endl; // since color is a string, its value must be in quotes
	else cout << "Thank you." << endl;
	return 0;
}