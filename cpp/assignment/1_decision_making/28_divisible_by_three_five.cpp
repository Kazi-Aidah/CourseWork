// 28. Write a C program to check whether a number is divisible by both 3 and 5.

#include<iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << n << " is divisible by both 3 and 5." << endl;
    } else {
        cout << n << " is NOT divisible by both 3 and 5." << endl;
    }

    return 0;
}