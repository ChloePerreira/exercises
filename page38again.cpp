// the continue statement (you can skip things)

#include <iostream>
using namespace std;

int main ()
{
	for (int n=0; n<10; n++) //declare/initialize; condition; increment
	{
		if (n==8) continue; // thing to skip over (think continue = skip)
		cout << n << ", "; // thing to do
	}
	cout << "all done"; // thing you continue onto when condition has been met
	return 0; 
}
