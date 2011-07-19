#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool isPrime( int num ) {
	
	for(int i = 2; i < num; i++) {
	
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	/* What is the largest prime factor of the number 600851475143 ? */

	long NUM_TO_CHECK = 600851475143;
	
	long i = 2;
	
	while(i <= NUM_TO_CHECK) {
		
		while(NUM_TO_CHECK % i == 0) {
			
			if(isPrime(i)){
				NUM_TO_CHECK = NUM_TO_CHECK/i;
				cout << "Factor: " << i << endl;
			}
		}
		
		i++;
	
	}
}