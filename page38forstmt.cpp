// for loops again

#include <iostream>
using namespace std;

int main()
{
	for (int a=4; a<10; a++)
	{
	cout << a << ", ";
	if (a==6)continue; // the double equal is CRITICAL or else it goes crazy
	}
	cout << "all done";
	return 0;
}