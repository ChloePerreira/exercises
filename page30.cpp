// Inputs

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int ing_number;
	cout << "Enter the number of different ingredients: \n"; 
	cin >> ing_number; //note the >>, after this is a new line automatically
	cout << "You entered " << ing_number << " ingredients.\n";
	int a, b;
	cout << "Enter a and b: \n";
	cin >> a >> b;
	cout << "a equals: " << a << " and b equals: " << b << endl;
	return 0;
}
	