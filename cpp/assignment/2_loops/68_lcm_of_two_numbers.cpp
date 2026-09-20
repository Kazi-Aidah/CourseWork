// 68. Write a C program to find the LCM of two numbers.

/* ::: reference:
   LCM stands for the least common multiple, 
   which is the smallest positive whole number
   that is divisible by both numbers.

   the lcm of 12: 12, 24, 36, 48, 60, 72
   the lcm of 18: 18, 36, 54, 72
*/

#include<iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cin >> a >> b;
    lcm = (a > b) ? a : b;
    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            cout << "LCM = " << lcm << endl;
            break;
        }
        lcm++;
    }
    return 0;
}