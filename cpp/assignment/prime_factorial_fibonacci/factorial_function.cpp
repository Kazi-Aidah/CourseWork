// factorial but in a function

// input: 5
// output should be: 120

#include<iostream>
using namespace std;

long long factorial(int n) {
	long long result = 1;

	for(int i = 1; i <= n; i++) {
		result = result * i;
	}

	return result;
}

int main() {
	int n;
	cin >> n;

	cout << factorial(n);
	return 0;
}
