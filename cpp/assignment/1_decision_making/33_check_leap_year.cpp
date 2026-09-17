// 33. Write a C program to check whether a year is a leap year.
// but colored!

#include<iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is \033[32ma leap year\033[0m." << endl;
    } else {
        cout << year << " is \033[31mNOT\033[0m a leap year." << endl;
    }

    // a variable can be colored by wrapping it with the color codes
    // ex: cout << "\033[32m" << year << "\033[0m" << endl;

    return 0;
}