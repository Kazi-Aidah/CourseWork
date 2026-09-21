// 64. Write a C program to print all prime numbers from 1 to N and count number.

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";

    for(int i = 2; i <= n; i++) {
        bool isPrime = true;

        for(int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nTotal prime numbers from 1 to " << n << " are: " << count << endl;

    return 0;
}