// make palindrome from input
// output = input + reversed input
// seeing double: https://codeforces.com/problemset/problem/1758/A

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    int t;

    cin >> t;
    cin.ignore();

    for(int i = 0; i < t; i++)
    {
        cin.getline(s, 101);

        cout << s; // output original

        int n = strlen(s);

        // output reversed
        for(int j = n - 1; j >= 0; --j)
        {
            cout << s[j];
        }

        cout << endl;
    }

    return 0;
}