#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int x;
	float y = 5.8;
	cout << y << endl;
	x = (int) y; // or do x = int (y) to convert y to an int
	cout << x << endl;
	cout << y;
}