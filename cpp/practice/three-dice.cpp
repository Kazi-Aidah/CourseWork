// Three Dice

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int sum = 21 - (a + b + c);

    cout << sum;

    return 0;
}