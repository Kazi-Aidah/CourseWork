// 87. Write a C program to find the minimum element of an array.
#include<iostream>
using namespace std;

int main() {
	int arr[5] = {1, 9, 7, 4, 5};

	for(int i = 1; i < 5; i++) {
		// current min < next element → if true, 
		// the next element becomes the new current min.
		if(arr[0] > arr[i]) {
			arr[0] = arr[i];
		}	
	}

	cout << arr[0] << endl;
	
	return 0;
}

// this is so smart
