// 61. Write a C program to reverse a number.

#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;

    cin >> n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10; // remove last digit from n otherwise infinite loop :(
    }

    cout << "Reversed number = " << reversed << endl;

    return 0;
}