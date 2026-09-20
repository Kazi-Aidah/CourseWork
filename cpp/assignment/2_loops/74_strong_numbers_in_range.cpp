// 74. Write a C program to print strong numbers within a range.

#include <iostream>
using namespace std;

int factorial(int x) {
    int fact = 1;

    for (int i = 1; i <= x; i++) {
        fact *= i;
    }

    return fact;
}

bool isStrong(int num) {
    int original = num, sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int start, end;

    cin >> start >> end;

    if (start > end) {
        cout << "Invalid range." << endl;
        return 0;
    }

    cout << "Strong numbers in the range are: " << endl;

    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
