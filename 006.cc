#include <iostream>
#include <math.h>

using namespace std;

/* 
Find the difference between the sum of the squares of the first one 
hundred natural numbers and the square of the sum.
*/

int main () {
	
	const int NUM = 100;
	
	// square of the sum of the numbers from 1 to NUM
	int square_of_sum = pow( (NUM+1)*NUM/2, 2 );
	
	// sum of the squars of the numbers from 1 to Num
	int sum_of_squares = NUM*(NUM+1)*(2*NUM + 1)/6;
	
	cout << "Difference between square of sum and sum of squares " << square_of_sum - sum_of_squares <<endl;
}