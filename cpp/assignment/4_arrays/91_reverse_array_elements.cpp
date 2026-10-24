// 91. Write a C program to reverse an array.
#include<iostream>
using namespace std;

int main() {
	int arr[5] = {1, 2, 3, 4, 5};

	// normal
	cout << "normal: ";
	for(int i = 0; i < 5; i++) {
		cout << arr[i];
	}

	cout << endl;

	// reversed
	cout << "reversed: ";
	for(int i = 4; i >= 0; i--) {
		cout << arr[i];
	}
	
	return 0;
}
