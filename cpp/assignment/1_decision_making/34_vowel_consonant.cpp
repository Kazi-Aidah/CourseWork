// 34. Write a C program to check whether a character is a vowel or consonant.
// but colored!

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    tolower(ch);

    // Check
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a \033[35mvowel\033[0m." << endl;
    } else {
        cout << ch << " is a \033[34mconsonant\033[0m." << endl;
    }

    return 0;
}