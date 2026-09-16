// 12. Write a C program to calculate the percentage of five subjects.

// INPUT: 3.50 4.00 3.75 4.00 3.00

#include<iostream>
using namespace std;

int main() {
    int n = 5;
    float a, b, c, d, e;
    double percentage;

    cin >> a >> b >> c >> d >> e;

    percentage = ((a + b + c + d + e) / (n * 4.0)) * 100;

    cout << percentage << "%" << endl;

    return 0;
}