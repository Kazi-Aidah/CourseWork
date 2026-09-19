// 59. Write a C program to find the sum of digits of a number.

// input: 1234
// output: 10 (where, 1 + 2 + 3 + 4 = 10)

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;

    // if the input is a negative number
    if (n < 0) {
        cout << "Please input a positive number!" << endl;
    } else {
        while (n != 0) {
            sum += n % 10; // add the last digit to summ
            n /= 10; // remove the last digit from n
        }
        cout << "Sum of digits = " << sum << endl;
    }

    return 0;
}