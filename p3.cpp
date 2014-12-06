/*Write a program that predicts the score needed on a final exam to achieve a desired grade in a course. The program should ask the user what their current grade is (i.e. 75%), what grade they desire (i.e. 80%), how much the final counts toward the grade (i.e. 25%) and then calculate what the user needs to score on the final.*/

#include <iostream>
using namespace std;

int main () {
	int current, goal, weighted, need;
	cout << "What is the current percentage?\n";
	cin >> current;
	cout << "What is the final percentage needed?\n";
	cin >> goal;
	cout << "What percentage does this count toward goal?\n";
	cin >> weighted;
	need = (goal - (1-weighted)*current) / weighted;
	cout << "The percentage needed is: " << need << endl;
	return 0;
}