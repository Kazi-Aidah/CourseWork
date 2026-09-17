// 39. Write a C program to determine the grade of a student based on marks.

#include<iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks for one course: ";
    cin >> marks;

    // A
    if (marks >= 80) {
        cout << "A+" << endl;
    } else if (marks >= 79) {
        cout << "A" << endl;
        cout << "Let's hope Sir gives you 1 more mark to increase your grade to A+" << endl;
    } else if (marks >= 75) {
        cout << "A" << endl;
    } else if (marks >= 70) {
        cout << "A-" << endl;
    }
    
    // B
    else if (marks >= 65) {
        cout << "B+" << endl;
    } else if (marks >= 60) {
        cout << "B" << endl;
    } else if (marks >= 55) {
        cout << "B-" << endl;
    }
    
    // C
    else if (marks >= 50) {
        cout << "C+" << endl;
    } else if (marks >= 45) {
        cout << "C" << endl;
    } else if (marks >= 40) {
        cout << "D" << endl;
    }
    
    // Sorry
    else {
        cout << "F" << endl;
    }

    return 0;
}