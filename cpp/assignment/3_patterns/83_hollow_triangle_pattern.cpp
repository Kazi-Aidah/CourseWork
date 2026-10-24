// 83. Write a C program to print a hollow triangle pattern.
#include<iostream>
using namespace std;

int main() {
	int n = 5;

	for(int i = 1; i <= n; i++) {
		for(int w = n; w >= i; w--) {
			cout << " ";
		}
		for(int j = 1; j <= i; j++) {
			if( i == 1 || i == n || j == 1 || j == i )
			{ cout << "* "; } 
			else { cout << "  "; }
		} cout << endl;
	}
	
	return 0;
}

// I'm cookin' 11:22pm
