// palindrome check
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s[100], rev[100];

    cin.getline(s, 100);

    int n = strlen(s);
    for(int i = 0; i <= n; i++) {
        rev[i] = s[n - 1 - i];
        // cout << rev;
    }
    if(strcmp(s, rev) == 0) {
        cout << "palindrome.";
    } else {
        cout << "not palindrome.";
    }

    // cout << s[n - i];
    // cout << "\033[35m" << s[i] << "\033[0m";

    return 0;
}

// get length, racecar = 7
// 0, n
// 1, n-1
// 2, n-2