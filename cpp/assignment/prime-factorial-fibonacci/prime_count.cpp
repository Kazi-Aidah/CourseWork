// input: 10
// output should be: 4

#include<iostream>
using namespace std;

int main() {
	int n;
	int count = 0;

	cin >> n;

	for (int number = 2; number <= n; number++) {
		int prime = 1;

		for (int divisor = 2; divisor < number; divisor++) {
			if (number % divisor == 0) {
				prime = 0;
				break;
			}
		}

		if (prime) {
			count++;
		}
	}

	cout << count;
	return 0;
}
