// testing different escape codes

#include <iostream>
#include <string>
using namespace std; 

int main ()
{
	cout << "One plus two is three, beep!\n";
	int c = 1;
	int b (2); 
	int result = c + b;
	cout << "Here's the result:\n";
	cout << '\t';
	cout << result;
	cout << '\a'; //this doesn't work for some reason...
	cout << "\nThis is a string literal \
that has multiple lines"; //if you indent this, it puts the indent in?
	string mystring ("string string"); //don't forget to put whatever your string is in quotes
	string yourstring ("strung string");
	cout << "mystring" "yourstring"; //this is "concatenation" 
	cout << L"blah blah blah blah"; // this is not working
	return 0;
}