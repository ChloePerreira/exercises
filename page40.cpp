// this has problems
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	string ing1, ing2, ing3, ing4, ing5;
	int bp1, bp2, bp3, bp4, bp5;
	int ingnumber;
	cout << "Enter the number of ing used: (up to 5)";
	cin >> ingnumber; 
	if (ingnumber==1) {
		cout << "Try again. Only 1 ing doesn't make sense.";
		return;}
	else if (ingnumber=2) {
		cout << "What are the ings? Name and press enter for each one: ";
		getline (cin, ing1);
		getline (cin, ing2);
		}
	else if (ingnumber=3) {
		cout << "What are the ings? Name and press enter for each one: ";
		getline (cin, ing1);
		getline (cin, ing2);
		getline (cin, ing3);
		}
	else if (ingnumber=4) {
		cout << "What are the ings? Name and press enter for each one: ";
		getline (cin, ing1);
		getline (cin, ing2);
		getline (cin, ing3);
		getline (cin, ing4);
		}
	else if (ingnumber=5) {
		cout << "What are the ings? Name and press enter for each one: ";
		getline (cin, ing1);
		getline (cin, ing2);
		getline (cin, ing3);
		getline (cin, ing4);
		getline (cin, ing5);
		}
	else if (ingnumber>5) {
		cout << "Too many ings. Start over again.";
		}
	if (ingnumber=5) {
		cout << "What's the ratio for " << ing1 << " (whole numbers only)?";
		cin >> bp1;
		cout << "And " << ing2 << "?";
		cin >> bp2; 
		cout << "And " << ing3 << "?";
		cin >> bp3; 
		cout << "And " << ing4 << "?";
		cin >> bp4; 
		cout << "And " << ing5 << "?";
		cin >> bp5; 
		}
	else if (ingnumber=4) {
		cout << "What's the ratio for " << ing1 << " (whole numbers only)?";
		cin >> bp1;
		cout << "And " << ing2 << "?";
		cin >> bp2; 
		cout << "And " << ing3 << "?";
		cin >> bp3; 
		cout << "And " << ing4 << "?";
		cin >> bp4; 
		}
	else if (ingnumber=3) {
		cout << "What's the ratio for " << ing1 << " (whole numbers only)?";
		cin >> bp1;
		cout << "And " << ing2 << "?";
		cin >> bp2; 
		cout << "And " << ing3 << "?";
		cin >> bp3; 
		}
	else if (ingnumber=2) {
		cout << "What's the ratio for " << ing1 << " (whole numbers only)?";
		cin >> bp1;
		cout << "And " << ing2 << "?";
		cin >> bp2; 
		}
	cout << "done";
	return 0; 
	}