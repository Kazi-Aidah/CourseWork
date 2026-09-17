// 27. Write a C program to check whether a number is divisible by 5.

#include<iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n % 5 == 0) {
        cout << n << " is divisible by 5." << endl;
    } else {
        cout << n << " is NOT divisible by 5." << endl;
    }

    return 0;
}