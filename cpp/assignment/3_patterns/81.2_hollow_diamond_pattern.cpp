// 81.2 Write a C program to print a hollow diamond pattern.
#include<iostream>
using namespace std;

int main() {
	int n = 5;
	
	// make 5 rows, i = 1 -> 5
	for(int i = 1; i <= n; i++) {
		// print whitespace
		for(int w = n; w >= i; w--) {
			cout << " ";
		} 
		// print asterisk
		for(int j = 1; j <= i; j++) {
			// print asterisk only for first and last columns hehe
			if( j == 1 || j == i ) {
				cout << "* ";
			} else { cout << "  "; }
		} cout << endl;
	}
	
	// make 4 row, i = 4 -> 1
	for(int i = n-1; i >= 1; i--) {
		// print whitespace
		for(int w = n; w >= i; w--) {
			cout << " ";
		}
		// print asterisk
		for(int j = 1; j <= i; j++) {
			// print asterisk only for first and last columns hehe
			if( j == 1 || j == i ) {
				cout << "* ";
			} else { cout << "  "; }
		} cout << endl;
	}
}
