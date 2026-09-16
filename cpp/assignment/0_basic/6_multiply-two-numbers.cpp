// 6. Write a C program to multiply two numbers.
// but using function!

#include<iostream>
using namespace std;

void multiply(int x, int y) {
    int sum;
    sum = x * y;
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    multiply(a, b);
    return 0;
}