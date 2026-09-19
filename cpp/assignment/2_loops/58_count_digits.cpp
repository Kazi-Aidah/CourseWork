// 58. Write a C program to count the number of digits in a number.

#include<iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while(n != 0) {
        n /= 10;
        count++;
    }

    cout << count << endl;

    return 0;
}