// 48. Write a C program to convert a digit into its word using switch-case.

#include<iostream>
using namespace std;

int main() {
    int digit;
    cout << "Input a digit (0-9): ";
    cin >> digit;

    switch (digit) {
        case 0:
            cout << "Zero\n";
            break;
        case 1:
            cout << "One\n";
            break;
        case 2:
            cout << "Two\n";
            break;
        case 3:
            cout << "Three\n";
            break;
        case 4:
            cout << "Four\n";
            break;
        case 5:
            cout << "Five\n";
            break;
        case 6:
            cout << "Six\n";
            break;
        case 7:
            cout << "Seven\n";
            break;
        case 8:
            cout << "Eight\n";
            break;
        case 9:
            cout << "Nine\n";
            break;
        default:
            cout << "Invalid input! Please enter a digit between 0 and 9.\n";
            break;
    }

    return 0;
}