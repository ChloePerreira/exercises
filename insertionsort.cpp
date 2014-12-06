//insertion sort for n

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//find smallest thing, swap to front, repeat without that element

void makeArray (int array[], int size){
	for (int i=0; i<size; ++i){
		int random = rand()%101; //need to call rand every time 
		array[i] = random;
	}
}
int findSmallestInRange (int array[], int start, int size){
	int smallIndex=start;
	for (int i = start+1; i<size; ++i){
		if (array[i]<array[smallIndex])smallIndex=i;
	}
	return smallIndex;
}
int swap (int array[], int indexDestination, int indexMove){
	int holderOriginal=array[indexDestination];
	array[indexDestination]=array[indexMove];
	array[indexMove]=holderOriginal;
}	
void sort (int array[], int size){ //always put size into argument alongside array itself (and "declare" the array)
	for (int i=0; i<size; ++i){
		int smallIndex = findSmallestInRange (array, i, size);
		swap (array, i, smallIndex);
	}
}
void printArray (int array[], int size){
	for (int i=0; i<size; ++i){ //displays array
		cout << array[i] << " ";
	}
	cout << "\n";
}
int main () {
	srand (time(NULL));
	int size (100);
	int array [size];
	makeArray (array, size);
	printArray (array, size);
	sort (array, size);
	cout << "Sorted array: ";
	printArray (array, size);
}
		
	
