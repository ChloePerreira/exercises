#include <iostream>
using namespace std;

void reverseArray(int array[], int size, int newArray[]) {
  for (int i=size-1; i>0; --i){
    int holder = array[i];
    newArray[(size-1)-i] = holder;
  }
}

void printArray(int array[], int size){
  for (int i = 0; i<size; ++i){
    cout << array[i];
    cout << endl;
  }
}

int main () {
  int array[8] = {0,1,2,3,4,5,6,7};
  int newArray[8];
  reverseArray(array, 8, newArray);
  printArray(newArray, 8);
  cout << "blah";
  printArray(array, 8);
}
  



