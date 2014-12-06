//multiplication table

#include <iostream>
using namespace std;

int main () {
	int multTable [13][13];
	for (int i=0; i<13; ++i){
		for (int j=0; j<13; ++j){
			multTable [i][j] = i*j;
		}
	}
	for (int i=0; i<13; ++i){
		for (int j=0; j<13; ++j){
			cout << "[" << i << " ][ " << j << " ]";
			cout << multTable[i][j] << " ";
			cout << "\n";
		}
	}
}