// 21. Write a C program to convert seconds into hours, minutes and seconds.

#include<iostream>
using namespace std;

int main() {
    int n, h, m, s;
    cin >> n;

    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;

    cout << h << " hours" << endl;
    cout << m << " minutes" << endl;
    cout << s << " seconds" << endl;

    return 0;
}