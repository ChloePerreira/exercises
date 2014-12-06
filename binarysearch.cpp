//have user input a range of numbers, generate a random number, have the program find the number
//you can know if you are too high or too low

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	srand (time(NULL));
	int answer, guess;
	int loBound, hiBound;
	cout << "Enter the lowest number in range: \n";
	cin >> loBound;
	cout << "Enter the highest number in range: \n";
	cin >> hiBound;
	answer = rand()%(hiBound-loBound+1)+loBound;
	cout << "The answer is: " << answer << endl;
	guess = loBound+((hiBound-loBound)/2);
	cout << "Program's guess will start at midpoint of range, which is: " << guess << endl;
	while (guess!=answer) {
		if (guess>answer){
			hiBound=guess-1;
			guess=loBound+((hiBound-loBound)/2);
			cout << "Guess too high, new guess is: " << guess << endl;
			cin.ignore(); //requires you to press enter to continue
		}
		if (guess<answer){
			loBound=guess+1;
			guess=loBound+((hiBound-loBound)/2);
			cout << "Guess too low, new guess is: " << guess << endl;
			cin.ignore();
		}
	}
	cout << "Answer is: " << answer << " and guess is: " << guess;
}
	