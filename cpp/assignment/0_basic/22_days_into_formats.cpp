// 22. Write a C program to convert days into years, months and days.

#include<iostream>
using namespace std;

int main() {
    int n, y, m, d;

    cin >> n;

    y = n / 365;
    m = (n % 365) / 30;
    d = (n % 365) % 30;

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}
