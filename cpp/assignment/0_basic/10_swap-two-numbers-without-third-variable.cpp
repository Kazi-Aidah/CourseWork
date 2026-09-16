// 10. Write a C program to swap two numbers without using a third variable.
// but using function!

#include<iostream>
using namespace std;

void swap(int x, int y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << x << " " << y << endl;
} // ^ is XOR to swappy

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}