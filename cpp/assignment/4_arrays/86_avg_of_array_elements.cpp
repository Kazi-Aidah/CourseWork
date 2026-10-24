// 86. Write a C program to find the average of array elements.

#include<iostream>
using namespace std;

int main() {
	double arr[5];
	double sum = 0;

    for(int i = 1; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

	double avg = sum / 5;

	cout << avg;
		
	return 0;
}
