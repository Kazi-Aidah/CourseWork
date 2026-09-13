// 23. C Program to Find LCM of Two Numbers
#include<stdio.h>
int main() {
    int a, b, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    int tb = b;
    while(tb != 0) {
        int r = temp % tb;
        temp = tb;
        tb = r;
    }
    gcd = temp;
    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
