//countdown and count up

#include <iostream>
using namespace std;

int main ()
{ 
	int a;
	int b;
	
	cout << "Enter your countdown number: ";
	cin >> a;
	while (a > 0) // the statement below will loop and won't stop until a > 0
		{
		cout << a << ", "; 
		--a; //this is your decrement operator, this decreases by one
		} //this whole thing prints a, adds ", ", and then decreases a by one 
	cout << "Go!" << endl; // this happens once the above statement stops looping
	
	cout << "Enter your countup number (something in the thousands): "; 
	cin >> b;
	while (b < 9002)
		{
		cout << b << ", ";
		++b; // this is you increment operator, this increases by one
		}
	cout << "OVER NINE THOUSAND" << endl; 
	
	int c;
	cout << "Enter c: ";
	cin >> c;
	do
		{
		cout << c << ", "; 
		++c;
		} while (c < 9002); // even this isn't met, this runs at least once
	cout << "Over nine thousand" << endl;
	return 0;
}
		
		