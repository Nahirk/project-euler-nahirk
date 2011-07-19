#include <iostream>

using namespace std;
/*
2520 is the smallest number that can be divided by 
each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly 
divisible by all of the numbers from 1 to 20?
*/


int main() {
	
	int counter = 19;
	bool test = true;

	while(true) {
		
		// test if counter is divisble by all numbers 1 - 20.
		for(int i = 1; i <= 20; i++ ) {
			if( counter % i != 0){
				test = false;
				break;
			}
		}
		
		if(test) {	
			cout << "Smallest number divisible by 1 - 20: "	<< counter << endl;
			return 0;
		}
		
		counter+= 19;
		test = true;
		
		// if(counter >= 10000000){
		// 	return 1;
		// }	
	}
}