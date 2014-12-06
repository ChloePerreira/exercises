//program compares memory addresses of two var on stack
//prints out the order of var by order of addresses

#include <iostream>
using namespace std;

int main () {
	int x(0), y(1);
	if (&x > &y) {
		cout << "The address of y is: " << &y << endl;
		cout << "The address of x is: " << &x << endl;
	}
	else {
		cout << "The address of x is: " << &x << endl;
		cout << "The address of y is: " << &y << endl;
	}
	return 0;
}		
