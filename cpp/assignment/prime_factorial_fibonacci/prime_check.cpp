// input: 10
// output should be: 2 3 5 7

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int number = 2; number <= n; number++) {
		int prime = 1;

		for(int divisor = 2; divisor < number; divisor++) {
			if (number % divisor == 0) {
				prime = 0;
				break;
			}
		}

		if (prime) {
			cout << number << " ";
		}
	}

	return 0;
}
