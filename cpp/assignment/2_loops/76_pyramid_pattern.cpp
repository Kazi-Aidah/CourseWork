// 76. Write a C program to print a pyramid pattern.

#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {
        // Print whitespaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}