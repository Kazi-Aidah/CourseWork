// 73. Write a C program to check whether a number is a strong number.

#include <iostream>
using namespace std;

int factorial(int x) {
    int fact = 1;

    for(int i = 1; i <= x; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n, original, sum = 0, digit;

    cin >> n;
    original = n;

    while (n > 0) {
        digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
        cout << original << " is a strong number." << endl;
    else
        cout << original << " is not a strong number." << endl;

    return 0;
}
