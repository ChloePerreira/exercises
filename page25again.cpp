//trying things again with operators 

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int today, yesterday;
	today = 8;
	yesterday = 7;
	
	bool q_same = (today==yesterday);
	cout << "Is yesterday the same day as today?" << endl;
	cout << q_same << endl;
	
	bool q_notequal (today!=yesterday);
	cout << "Is today not equal to yesterday?" << endl;
	cout << q_notequal << endl;
	
	bool test_and = ((today>yesterday) && (yesterday<=today));
	cout << "Today > yesterday x yesterday =< today?" << endl;
	cout << test_and << endl;
	
	string yn;
	yn = (today==+yesterday) ? "Yes" : "No";
	cout << "Is today equal to plus one yesterday?" << endl;
	cout << yn;
	return 0;
}
	
	
	