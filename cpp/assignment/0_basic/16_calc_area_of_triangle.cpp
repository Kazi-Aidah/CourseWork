// 16. Write a C program to calculate the area of a triangle.

#include<iostream>
using namespace std;

int main() {
    float b, h, area;

    cin >> b;
    cin >> h;

    area = 0.5 * b * h;

    cout << "Area of triangle: " << area << endl;

    return 0;
}
