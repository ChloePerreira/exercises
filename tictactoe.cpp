//tic tac toe

#include <iostream>
using namespace std;

void setArray (int array[][3], int rsize, int csize){
	for (int i=0; i<rsize; ++i){
		for (int j=0; j<csize; ++j){
			array[i][j]=0;
		}
	}
}
void printArray (int array[][3], int rsize, int csize){
	cout << "    0   1   2 \n";
	for (int i=0; i<rsize; ++i){
		cout << " " << i << " ";
		for (int j=0; j<csize; ++j){
			if (array[i][j]==0){cout<<"   ";}
			if (array[i][j]==1){cout<<" X ";}
			if (array[i][j]==10){cout<<" O ";}
			if (j<2){cout<<"|";}
		}
		cout << endl;
		if (i<2) {cout<<"   -----------\n";}
	}
}
void xTurn (int array[][3], int rsize, int csize){
	int i=0, j=0;
	cout << "Enter X position:\n";
	cin >> i >> j;
	array[i][j]=1;
}
void oTurn (int array[][3], int rsize, int csize){
	int i=0, j=0;
	cout << "Enter O position:\n";
	cin >> i >> j;
	array[i][j]=10;
}
bool checkRow (int i, int array[][3], int rsize, int csize){
	int iSum = array[i][0]+array[i][1]+array[i][2];
	if (iSum==3 || iSum==30) return true;
	else return false;
}
bool checkColumn (int j, int array[][3], int rsize, int csize){
	int jSum = array[0][j]+array[1][j]+array[2][j];
	if (jSum==3 || jSum==30) return true;
	else return false;
}
bool diagonal (int array[][3], int rsize, int csize){
	int dSum1 = array[0][0]+array[1][1]+array[2][2];
	int dSum2 = array[0][2]+array[1][1]+array[2][0];
	if (dSum1==3 || dSum1==30 || dSum2==3 || dSum2==30) return true;
	else return false;
}
int main (){
	int array [3][3];
	setArray (array, 3, 3);
	printArray (array, 3, 3);
	for (int k=1; k<10; ++k){
		if (k%2!=0){ //X turn
			int i=0, j=0;
			cout << "Enter X position:\n";
			cin >> i >> j;
			while (array[i][j]!=0 || i>2 || j>2 || i<0 || j<0){
				cout << "No good. Try again.\n";
				cin >> i >> j;
			}
			array[i][j]=1;
			if (checkRow (i, array, 3, 3) || checkColumn (j, array, 3, 3) || diagonal (array,3,3)){
				cout << "X wins!\n"; printArray (array, 3, 3); break;
			}
		}
		if (k%2==0){ //O turn
			int i=0, j=0;
			cout << "Enter O position:\n";
			cin >> i >> j;
			while (array[i][j]!=0 || i>2 || j>2 || i<0 || j<0){
				cout << "No good. Try again.\n";
				cin >> i >> j;
			}
			array[i][j]=10;
			if (checkRow (i, array, 3, 3) || checkColumn (j, array, 3, 3) || diagonal (array,3,3)){
				cout << "O wins!\n"; printArray (array, 3, 3); break;
			}
		}
		printArray (array, 3, 3);
		cout << endl;
	}		
	return 0;
}