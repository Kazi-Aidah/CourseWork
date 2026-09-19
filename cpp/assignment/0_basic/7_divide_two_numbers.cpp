// 6. Write a C program to divide two numbers.
// but using function!

#include<iostream>
using namespace std;

void divide(int x, int y) {
    int sum;
    sum = x / y;
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    divide(a, b);
    return 0;
}