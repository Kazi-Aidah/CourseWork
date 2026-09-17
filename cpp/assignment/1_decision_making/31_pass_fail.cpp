// 31. Write a C program to check whether a student has passed or failed.
// but colored!

#include<iostream>
using namespace std;

int main() {
    int marks;

    cout << "Will you pass or fail? " << endl;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "You have \033[32mpassed\033[0m." << endl; // colored green, "\033[32"
    } else {
        cout << "You have \033[31mfailed\033[0m." << endl; // colored red, "\033[31"
    }

    return 0;
}