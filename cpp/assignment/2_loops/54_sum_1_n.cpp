// 54. Write a C program to find the sum of numbers from 1 to N.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}