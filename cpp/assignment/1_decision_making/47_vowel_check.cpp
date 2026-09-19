// 47. Write a C program to check whether a character is a vowel using switch-case.

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Input a character: ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << ch << " is a vowel.\n";
            break;
        default:
            cout << ch << " is not a vowel.\n";
            break;
    }

    return 0;
}