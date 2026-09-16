// 24. Write a C program to calculate electricity bill.

// turn off your lights and fans and use solar power
// also my electricity went out as I was typing this TvT

#include<iostream>
using namespace std;

int main() {
    int units;
    double bill = 0.0;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 75) {
        cout << "I don't know how to do this"; 
    } else { cout << "I really don't want to do this"; }

    return 0;
}