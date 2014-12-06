/*find the smallest, largest and average values in a collection of N numbers supplied by the user. Get the value of N before scanning each value, one by one, from the user. compute and display both the ~range of values in the data collection and the ~standard deviation of the data collection. To compute the standard deviation, ~accumulate the sum of the squares of the data values in the main loop. After the loop exits, use the formula

standard deviation = sqrt(sum_squares/N - average^2) condition ? trueresult : falsresult*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	int b = 1;
	int v, v_max, v_min;
	float v_avg, v_sum_sqr, v_sum, std_dev = 0;
	cout << "How many values will you enter?" << endl; 
	cin >> n;
	cout << "Enter value 1: " << endl; // get the first value
	cin >> v;
	v_max = v; // put it in the max box
	v_min = v; // put it in the min box
	v_sum_sqr = v*v; 
	v_sum = v; // set it as the sum (all this stuff works out if n=1 and changes if not)
	for (b=2; b<n+1; b++){ //this gets skipped when n=1 bc the condition of b<n+1 isn't met
		cout << "Enter value " << b << ":" << endl;
		cin >> v;
		v_sum_sqr += v*v;
		v_sum += v; //now you add the previous v to the new v and set it as v_sum
		if (v > v_max) v_max = v; // checking if v can go into the v_max
		else if (v < v_min) v_min = v; //if not, can v go into v_min?
		else if (v == v_max) v_max = v; // if not, can you just put it in v_max anyway?
		else if (v == v_min) v_min = v; // ugh, just put it in v_min...
		}
	if (n==1) { // this doesn't work if you put (n=1) = assigns, == actually means equals
		 cout << "You only entered one value!" << endl;}
	cout << "The max is: " << v_min << endl;
	cout << "The min is: " << v_max << endl;
	v_avg = v_sum/n;
	std_dev = sqrt((v_sum_sqr/n)-(v_avg*v_avg));
	cout << "The average is: " << v_avg << endl;
	cout << "The standard deviation is: " << std_dev << endl;
	return 0;
}
			
	
		
		
		
		
		
