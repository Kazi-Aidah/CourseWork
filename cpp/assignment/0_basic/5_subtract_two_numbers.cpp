// 5. Write a C program to subtract two numbers.
// but using function!

#include<iostream>
using namespace std;

void sub(int x, int y) {
    int sum;
    sum = x - y;
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    sub(a, b);
    return 0;
}