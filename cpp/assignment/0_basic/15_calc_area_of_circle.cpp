// 15. Write a C program to calculate the area of a circle.

#include<iostream>
using namespace std;

int main() {
    float r, area;

    cout << "Enter radius: ";
    cin >> r;

    float pi = 3.1416;
    area = pi * r * r;

    cout << "Area of circle: " << area << endl;

    return 0;
}
