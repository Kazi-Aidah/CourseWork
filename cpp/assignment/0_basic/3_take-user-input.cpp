// 3. Write a C program to take input from the user and display it.
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);
    cout << s << endl;
    return 0;
}