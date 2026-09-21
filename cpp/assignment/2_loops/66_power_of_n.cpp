// 66. Write a C program to find the power of a number using a loop.

#include<iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}