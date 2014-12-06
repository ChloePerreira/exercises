/* amount borrowed (P), annual interest rate, # of monthly payments (n) 
To calculate the monthly payment, use payment = (i*P)/(1-(1+i)^{-n})
*note, i is the monthly rate so divide the annual rate by 12
After calculating payment, round to nearest cent
Then have program write to screen each payment that will need to be made */

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float p, i, x, d, i12;
	int n;
	cout << "Enter p (amount): " << endl;
	cin >> p;
	cout << "Enter i (note: format so 10% is .10): " << endl;
	cin >> i;
	cout << "Enter n (mos): " << endl;
	cin >> n;
	cout << "You have entered: p = " << p << ", i = " << i << ", and n = " << n << "." << endl;
	i12 = (i/12);
	int b;
	d = pow((1+i12),(-n)); //this is where n lives
	x = (i12*p)/(1-d);
	float pmt_int, pmt_princ, a_new, int_sum;
	cout.precision(2);
	cout << fixed << x << "\n";
	a_new = p;
	int_sum = 0;
	cout << "Month    Pmt    pmt_int    pmt_princ    a_new" << endl; 
	for (b=1; b<n+1; ++b)  {
		pmt_int = a_new*i12;
		pmt_princ = x - pmt_int;
		a_new = a_new - pmt_princ; //interest gets paid off ev month and is sep from princ
		int_sum = int_sum + pmt_int;
		cout << b << "        " << x << "    " << pmt_int << "       " << pmt_princ << "      " << a_new << endl;
		}
	cout << "Sum of interest paid: " << int_sum;
	cout << "done"; 
	return 0;
}