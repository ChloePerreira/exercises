//operators

#include <iostream>
#include <string>
using namespace std; 

int main ()
{
	int a = 1;
	int b (2);
	int c = 3;
	cout << "Is a greater than b?";
	bool d, e;
	d = (a > b);
	cout << endl; 
	cout << d;
	cout << endl;
	d = (a==b);
	cout << "Is a equal to b?";
	cout << endl; 
	cout << d;
	cout << endl; 
	cout << "Is a less than or equal to b?";
	d = (a<=b); 
	cout << endl; 
	cout << d;
	cout << endl; 
	e = (a==++b);
	cout << "What is d?";cout << endl;
	cout << d; 
	cout << endl;
	cout << "What is e?";cout << endl;
	cout << e;
	cout << endl;
	bool aa ((d) && (e));
	cout << "What is d && e?";cout<<endl;
	cout << aa;
	cout << endl;
	cout << "What is d or e?";cout<<endl;
	bool oo ((d) || (e));
	cout << oo;
	cout << endl;
	cout << "What is not oo?";cout<<endl;
	cout << !oo;
	cout << endl;
	string r; 
	r = (a==c) ? "Yes" : "No"; // r is a string here!
	cout << "Does a equal c?";cout<<endl; // this is quicker than what you were doing before
	cout << r;
	return 0;
}