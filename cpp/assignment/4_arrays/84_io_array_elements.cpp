// 84. Write a C program to input and display elements of an array.
#include<iostream>
using namespace std;

int main() {
	int arr[5];

	for(int i = 1; i <= 5; i++) {
		cin >> arr[i];
	}
	for(int i = 1; i <= 5; i++) {
		cout << arr[i] << " ";
	}
		
	return 0;
}
