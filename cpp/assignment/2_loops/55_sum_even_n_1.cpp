// 55. Write a C program to find the sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}