#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string first_string;
	first_string = "This string was declared without an initial value being assigned."; 
	cout << first_string << endl;
	string second_string = "This string was declared in the c-line way.";
	cout << second_string << endl;
	string third_string ("This string was declared in the constructor way (which is nice for functions).");
	cout << third_string << endl; 
	return 0;
}
/* Berkeley's cloudy shell
