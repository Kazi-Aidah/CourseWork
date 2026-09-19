// 62. Write a C program to check whether a number is a palindrome.

#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;

    cin >> n;
    original = n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}