// 25. Write a C program to check whether a nber is positive, negative or zero.

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n > 0) {
        cout << "The number is positive." << endl;
    } else if (n < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}