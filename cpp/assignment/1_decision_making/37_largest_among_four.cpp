// 37. Write a C program to find the largest among four numbers.

#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    if(a > b && a > c && a > d) {
        cout << a << " is the largest number." << endl;
    } else if(b > a && b > c && b > d) {
        cout << b << " is the largest number." << endl;
    } else if(c > a && c > b && c > d) {
        cout << c << " is the largest number." << endl;
    } else {
        cout << d << " is the largest number." << endl;
    }

    return 0;
}