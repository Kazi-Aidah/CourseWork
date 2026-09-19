// check leap year, three condis
// test cases: 1996(yes) & 1998(no)

#include<iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    /* in words:
    either condition 1: 
    - year divisible by 4
    - AND year not divisible by 100(century)

    OR condition 2:
    - year divisible by 400
    */

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "yes";
    }
    else { cout << "no"; }

    // cout << year;

    return 0;
}