// 40. Write a C program to determine whether a triangle is equilateral, isosceles or scalene.

#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the three sides of a triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "The triangle is \033[32mequilateral\033[0m." << endl; // colored green 32
    } else if (a == b || b == c || a == c) {
        cout << "The triangle is \033[33misosceles\033[0m." << endl; // colored yellow 33, I like orange more :)
    } else {
        cout << "The triangle is \033[31mscalene\033[0m." << endl; // colored red 31
    }

    return 0;
}