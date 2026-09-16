// 23. Write a C program to calculate gross salary.

#include<iostream>
using namespace std;

int main() {
    double basic, hra, da, gross;

    // hra = House Rent Allowance
    // da = Dearness Allowance
    // gross = Gross Salary
    // basic = Basic Salary

    cin >> basic;

    hra = basic * 20 / 100;
    da = basic * 80 / 100;

    gross = basic + hra + da;

    cout << "Gross Salary: " << gross << endl;

    return 0;
}

// bruh in what country ?? whejuegawg