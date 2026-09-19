// 49. Write a C program to print numbers from 1 to N.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    return 0;
}