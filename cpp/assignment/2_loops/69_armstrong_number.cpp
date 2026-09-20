// 69. Write a C program to check whether a number is an Armstrong number.

#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0, digit;

    cin >> n;
    original = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
