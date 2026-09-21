// 70. Write a C program to print Armstrong numbers within a range.

#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
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

    cout << "Armstrong numbers in the range are: " << endl;

    for(int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
