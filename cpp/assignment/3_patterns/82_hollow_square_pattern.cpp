// 82. Write a C program to print a hollow square pattern.
#include<iostream>
using namespace std;

int main() {
	int n = 5;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			// print top, bottom, left and right borders
			if(i == 1 || i == n || j == 1 || j == n) 
			{ cout << "* "; }
			else { cout << "  "; }
		}
		cout << endl;
	}
	
	return 0;
}
/// hehehehehhehehe I love micro, it is currently 11:11pm
