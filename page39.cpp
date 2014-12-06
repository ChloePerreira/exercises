// this uses go to and is probably not the best way to do things

#include <iostream>
using namespace std;

int main ()
{
	int a = 10;
	loop: // introduces the loop
	cout << a << ", "; // loop says print a
	a--; // and then decrease it
	if (a>0) goto loop; // if a>0 do the loop
	cout << "all done";
	return 0;
}