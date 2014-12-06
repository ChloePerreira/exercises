/*in a list of numbers, find i and j (one follows the other) with 
the biggest difference between them*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 

void makeArray (int array[], int size){
	cout << "Enter " << size << " numbers:\n";
	for (int i=0; i<size; ++i){ //i gets one less than size (the end) and stops
		cin >> array[i];
	}
	cout << endl;
}
void randArray (int array[], int size){
	srand(time(NULL)); 
	for (int i=0; i<size; ++i){
		array[i]=rand()%50+1;
	}
}
int maxDiffRow (int array[], int size, int start){//equals index of max for that starting pt
	int diff=0;
	int maxIndex=start; //careful how you initialize, do things that make sense in edge cases
	for (int i=start; i<size; ++i){
		if ((array[i]-array[start])>diff){
			maxIndex=i;
			diff=array[i]-array[start]; //don't forget this kind of obvious stuff!
		}
	}
	return maxIndex; 		
}		
int on2diff (int array[], int size){ //print i and j
	int maxDiff=0, maxIndex=0, minIndex=0, maxHolder=0; //initialize or else...
	for (int i=0; i<size; ++i){
		maxHolder = maxDiffRow (array, size, i); //relative to array[i]
		if ((array[maxHolder]-array[i])>maxDiff){
			maxDiff = array[maxHolder]-array[i]; 
			minIndex = i;
			maxIndex = maxHolder;
		}
	}
	cout << "Buy on day " << minIndex << " and sell on " << maxIndex << endl;
}					
int ondiff (int array[], int size){
	int maxIndex=0, minIndex=0, maxDiff=0, tempDiff=0, tempMinx=0;
	for (int i=0; i<size; ++i){//from right to left, maxing out at 1
		if (array[i]<array[tempMinx]){
			tempMinx=i;
		}
		if ((array[i]-array[tempMinx])>maxDiff){ //once you've set tempmin to i, youll always be after tempmin
			minIndex=tempMinx;
			maxIndex=i;
			maxDiff=array[maxIndex]-array[minIndex];
			
		}
	}		
		
		/*if (((array[i]-array[minIndex])>maxDiff) && i>minIndex){
			maxDiff=array[i]-array[minIndex];
			maxIndex=i;
		}
		if (((array[maxIndex]-array[i])>maxDiff) && i<maxIndex){
			maxDiff=array[maxIndex]-array[i];
			minIndex=i;
		}*/
	cout << "Buy on day " << minIndex << " and sell on " << maxIndex << " for diff of " << maxDiff << endl;
}
			
			
		
		

int main (){
	int array [10];
	randArray (array, 10);
	for (int i=0; i<10; ++i){
		cout << array[i] << " ";
	}
	cout << endl;
	ondiff (array, 10);
}
		