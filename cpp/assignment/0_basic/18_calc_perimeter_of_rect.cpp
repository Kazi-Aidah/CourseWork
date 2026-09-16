// 18. Write a C program to calculate the perimeter of a rectangle.

#include<iostream>
using namespace std;

int main() {
    float a, b, perimeter;

    cin >> a >> b;

    perimeter = 2 * (a + b);

    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}
