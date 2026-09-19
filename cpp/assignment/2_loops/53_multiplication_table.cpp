// 53. Write a C program to print the multiplication table of a number.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Multiplication table of " << n << ":\n";
    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}