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
        cout << "You have \033[32mpassed\033[0m." << endl; // green
    } else {
        cout << "You have \033[31mfailed\033[0m." << endl; // red
    }

    return 0;
}