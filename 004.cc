#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

bool isPalindrome( int num ) {
	
	// turn to string?
	
	string string_of_num;
	stringstream out;
	out << num;
	string_of_num = out.str();
	
	int string_size = string_of_num.size();
	
	for( int i = 0; i < string_size/2; i++) {
		if(string_of_num[i] != string_of_num[string_size - i - 1]){
			return false;
		}
	}
	
	return true;
	
}

int main() {
	
	long LARGEST_NUM = 998001;
	
	int largestPalindrome = 0;
	
	for(int i = 999; i > 0; i--) {
			for(int j = 999; j > 0; j--) {
				if( isPalindrome(i*j) ) {
					if(largestPalindrome < i*j){
						largestPalindrome = i*j;
					}
				}
			}
		}
		
		cout << "Largest Palindrome: " << largestPalindrome << endl;
	
	
}