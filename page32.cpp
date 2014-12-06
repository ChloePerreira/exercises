#include <iostream> 
#include <string>
using namespace std;

int main ()
{
	string month_year;
	int day;
	cout << "Enter the day number: ";
	cin >> day;
	cout << "Enter the month and year: ";
	cin.ignore();
	getline (cin, month_year);
	cout << "Today is " << day << " " << month_year; 
	return 0;
}
	/* see here for details about cin.ignore(); 
	http://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs */