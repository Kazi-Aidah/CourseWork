// 50. Write a C program to print numbers from N to 1.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    return 0;
}