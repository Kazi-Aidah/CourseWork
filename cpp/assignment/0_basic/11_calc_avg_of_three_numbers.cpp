// 11. Write a C program to calculate the average of three numbers.

#include<iostream>
using namespace std;

void avg(double x, double y, double z) {
    double avg = (x + y + z) / 3;
    cout << avg;
}

int main() {
    int n, a, b, c;
    cin >> a >> b >> c;
    avg(a, b, c);

    return 0;
}