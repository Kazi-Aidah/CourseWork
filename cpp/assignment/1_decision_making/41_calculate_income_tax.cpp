// 41. Write a C program to calculate income tax based on salary.
// Source: National Board of Revenue (NBR), Bangladesh.

#include<iostream>
using namespace std;
int main() {
    double salary, tax;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary <= 400000) {
        tax = 0;
    } else if (salary <= 700000) {
        tax = (salary - 400000) * 0.10;
    } else if (salary <= 1100000) {
        tax = 30000 + (salary - 700000) * 0.15;   // 10% of 300,000 = 30,000
    } else if (salary <= 1600000) {
        tax = 30000 + 60000 + (salary - 1100000) * 0.20; // 15% of 400,000 = 60,000
    } else if (salary <= 3600000) {
        tax = 30000 + 60000 + 100000 + (salary - 1600000) * 0.25; // 20% of 500,000 = 100,000
    } else {
        tax = 30000 + 60000 + 100000 + 500000 + (salary - 3600000) * 0.30; // 25% of 2,000,000 = 500,000
    }

    cout << "Your income tax is: " << tax << endl;
    return 0;
}