// 56. Write a C program to find the sum of all odd numbers from N to 1.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}