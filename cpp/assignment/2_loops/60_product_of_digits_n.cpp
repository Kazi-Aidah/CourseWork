// 60. Write a C program to find the product of digits of a number.

#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cin >> n;

    while(n != 0) {
        product *= n % 10;
        n /= 10;
    }

    cout << product << endl;

    return 0;
}