// 26. Write a C program to check whether a number is even or odd.

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}