// input: 7
// output should be: 0 1 1 2 3 5 8

#include<iostream>
using namespace std;

int fibonacci(int n) {
	int first = 0;
	int second = 1;

	for (int i = 1; i < n; i++) {
		int next = first + second;
		first = second;
		second = next;
	}

	return first;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << fibonacci(i) << " ";
	}

	return 0;
}
