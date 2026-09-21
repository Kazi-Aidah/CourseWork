// 65. Write a C program to generate Fibonacci series using a function.

#include<iostream>
using namespace std;

void fibo(int n) {
    int t1 = 0, t2 = 1, next;

    for(int i = 1; i <= n; i++) {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    cout << endl;
}

int main() {
    int n;

    cin >> n;

    fibo(n);
    return 0;
}  