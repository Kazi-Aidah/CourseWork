// 52. Write a C program to print all odd numbers from 1 to N.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i -= 2) {
        cout << i << " ";
    }

    return 0;
}