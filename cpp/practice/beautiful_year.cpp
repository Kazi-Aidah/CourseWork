// beautiful year: https://codeforces.com/problemset/problem/271/A
// basically compare every digit so "digit does not repeat"

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int year;
    cin >> year;

    year++;

    // get each digit as a string
    // compare and exclude each digit

    while(true) {
        string s = to_string(year);
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
        s[1] != s[2] && s[1] != s[3] && 
        s[2] != s[3]) {
            cout << year;
            break;
        } year++;
    }

    // cout << year;
    // cout << s;
    
    return 0;
}