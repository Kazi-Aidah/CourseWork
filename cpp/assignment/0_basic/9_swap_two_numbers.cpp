// 8. Write a C program to find the swap two numbers.
// but using function!

#include<iostream>
using namespace std;

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}