// 4. Write a C program to add two numbers.
// but using function!

#include<iostream>
using namespace std;

void add(int x, int y) {
    int sum;
    sum = x + y;
    cout << sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    add(a, b);
    return 0;
}