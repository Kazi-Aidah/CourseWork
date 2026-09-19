// 63. Write a C program to check whether a number is prime.

#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}