// 13. Write a C program to convert Celsius to Fahrenheit.
// 14. Write a C program to convert Fahrenheit to Celsius.

// but choice based (>u<)/

#include<iostream>
using namespace std;

float c_to_f(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float f_to_c(float f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    float c, f;

    cout << "1. celsius to fahrenheit" << endl;
    cout << "2. fahrenheit to celsius" << endl;
    cin >> choice;

    switch(choice) {
        case 1:
            cin >> c;
            cout << c_to_f(c) << "°F" << endl;
            break;
        case 2:
            cin >> f;
            cout << f_to_c(f) << "°C" << endl;
            break;
        default:
            cout << "you have to pick one!" << endl;
    }

    return 0;
}