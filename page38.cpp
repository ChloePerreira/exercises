// break loop

#include <iostream>
using namespace std;

int main ()
{
	int a;
	
	for (a=0; a<10; a++)
	{
		cout << a << ", ";
		if (a==5) {cout << "stop"; break;} // once a shows up as 5, it stops
	}                                      // a shows up before break happens
	
	int b;
	for (b=10; b>0; b--)
	{
		if (b==5) {cout << "stop"; break;} // the if and the statement are reversed
		cout << b << ", "; // b shows up after break happens, so once b==5, it won't show up
	}
	return 0;
}