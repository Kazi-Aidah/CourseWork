// 51. Write a C program to print all even numbers from 1 to N.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}