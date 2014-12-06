//defining constants with a preprocessor directive 

#include <iostream>
using namespace std;

#define newline '\n'
#define tab '\tab'
#define myage 26

int main ()
{
	cout << "I am ";
	cout << myage;
	cout << newline;
	cout << "That is kind of old";
	cout << "myage times"; //this won't work, you have to put myage as it's own thing like above
}