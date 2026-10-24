// 90. Write a C program to count positive and negative elements in an array.
#include<iostream>
using namespace std;

int main() {
	int arr[10] = {-2, 3, 4, 5, 6, -7, 8, -9, 12, 14};
	int posCount = 0, negCount = 0;

	for(int i = 0; i < 10; i++) {
		if(arr[i] > 0) {
			posCount++;
		} else {
			negCount++;
		}
	}

	cout << "Positive: " << posCount << endl;
	cout << "Negative: " << negCount << endl;

	return 0;
}
