// 30. Write a C program to find the smaller between two numbers.

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << a << " is smaller." << endl;
    } else {
        cout << b << " is smaller." << endl;
    }

    return 0;
}