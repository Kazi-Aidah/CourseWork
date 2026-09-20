// 67. Write a C program to find the GCD of two numbers.

/* ::: reference:
   GCD stands for the greatest common divisor, 
   which is the largest positive whole number
   that divides evenly into two or more numbers 
   without leaving a remainder.

   The divisors of 12 are: 1, 2, 3, 4, 6, and 12.
   The divisors of 18 are: 1, 2, 3, 6, 9, and 18.
*/

#include<iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cin >> a >> b;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD = " << gcd << endl;
    return 0;
}