// 81. Write a C program to print a diamond pattern.
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
			cout << "* ";
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
			cout << "* ";
		} cout << endl;
	}
}

// AHAHAHHA I CAN MAKE A DIAMOND AHHAHSHAHDJ
/*
	basically, the inner loop are the same, it is the outer loop that's handling the "i" that the babies are referencing.
*/
