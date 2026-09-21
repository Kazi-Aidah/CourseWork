// input: 7
// output should be: 0 1 1 2 3 5 8

#include<iostream>
using namespace std;

int main() {
	int n;
	int first = 0;
	int second = 1;

	cin >> n;

	for(int i = 1; i <= n; i++) {
		cout << first << " ";

		int next = first + second;
		first = second;
		second = next;
	}

	return 0;
}
