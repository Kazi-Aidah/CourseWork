// 42. Write a C program to check admission eligibility based on marks.

#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "You are eligible for admission to the top universities." << endl;
    } else if (marks >= 75) {
        cout << "You are eligible for admission to good universities." << endl;
    } else if (marks >= 60) {
        cout << "You are eligible for admission to average universities." << endl;
    } else {
        cout << "You are not eligible for admission." << endl;
    }

    return 0;
}