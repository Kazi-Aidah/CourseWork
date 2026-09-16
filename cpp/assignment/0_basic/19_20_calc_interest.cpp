// 19. Write a C++ program to calculate simple interest.
// 20. Write a C++ program to calculate compound interest.
// but function!
// and merged

// principal(p), rate(r), time(t)

#include<iostream>
#include<cmath>
using namespace std;

void simpleint(double p, double r, double t) {
    double si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
}

void compint(double p, double r, double t) {
    double ci = p * pow((1 + r / 100), t) - p;
    cout << "Compound Interest: " << ci << endl;
}

int main() {
    double p, r, t;

    cin >> p >> r >> t;

    simpleint(p, r, t);
    compint(p, r, t);

    return 0;
}
