// 89. Write a C program to count even and odd elements in an array.
#include<iostream>
using namespace std;

int main() {
	int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9, 12, 14};
	int evenCount = 0, oddCount = 0;

	for(int i = 0; i < 10; i++) {
		if(arr[i] % 2 == 0) {
			evenCount++;
		} else {
			oddCount++;
		}
	}

	cout << "Even: " << evenCount << endl;
	cout << "Odd: " << oddCount << endl;

	return 0;
}
