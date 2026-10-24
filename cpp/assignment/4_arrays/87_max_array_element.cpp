// 87. Write a C program to find the maximum element of an array.
#include<iostream>
using namespace std;

int main() {
	int arr[5] = {1, 9, 7, 4, 5};

	for(int i = 1; i < 5; i++) {
		// current max < next element → if true, 
		// the next element becomes the new current max.
		if(arr[0] < arr[i]) {
			arr[0] = arr[i];
		}	
	}

	cout << arr[0] << endl;
	
	return 0;
}

// this is so smart
