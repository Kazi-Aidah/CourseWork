// 57. Write a C program to calculate the factorial of a number.

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cin >> n;

    // if the input is a negative number
    if (n < 0) {
        cout << "Please input a positive number!" << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}