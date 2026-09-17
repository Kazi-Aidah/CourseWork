// 32. Write a C program to check whether a person is eligible to vote.
// but colored!

#include<iostream>
using namespace std;

int main() {
    int age;

    cout << "Can you vote? " << endl;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are \033[32meligible\033[0m to vote." << endl;
    } else {
        cout << "You are \033[31mnot eligible\033[0m to vote." << endl;
    }

    return 0;
}