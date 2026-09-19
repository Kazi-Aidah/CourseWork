// 8. Write a C program to find the remainder of two numbers.
// but using function!

#include<iostream>
using namespace std;

void rem(int x, int y) {
    int sum;
    sum = x % y;
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    rem(a, b);
    return 0;
}