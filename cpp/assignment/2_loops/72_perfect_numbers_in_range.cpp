// 72. Write a C program to print perfect numbers within a range.

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for(int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int start, end;

    cin >> start >> end;

    if (start > end) {
        cout << "Invalid range." << endl;
        return 0;
    }

    cout << "Perfect numbers in the range are: " << endl;

    for(int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
