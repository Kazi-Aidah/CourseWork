// input: 5
// output should be: 120

#include<iostream>
using namespace std;

int main() {
	int n;
	long long factorial = 1;

	cin >> n;

	for(int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}

	cout << factorial;
	return 0;
}
