// 43. Write a C program to create a simple calculator using switch-case.

#include<iostream>
using namespace std;

int main() {
    float a, b;
    int choice;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Choose an operator:\n1. Addition (+) \n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice; // operator choice
    cout << choice << " selected!\nEnter another number: ";
    cin >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            if (b == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "Result: " << a / b << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}