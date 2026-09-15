// make palindrome from input
// output = input + reversed input

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s[100];

    cin.getline(s, 100);
    cout << s;

    int n = strlen(s); // get input length

    // ::: reversal
    for(int i = n; i >= 0; --i) {
        cout << s[i];
    }

    return 0;
}