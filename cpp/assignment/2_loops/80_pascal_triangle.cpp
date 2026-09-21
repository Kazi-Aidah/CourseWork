// 80. Write a C program to print Pascal's triangle.

#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; ++i) {
        int number = 1;
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // Print numbers ::: row
        for (int j = 0; j <= i; ++j) {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}