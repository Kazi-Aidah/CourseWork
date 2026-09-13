// 27. C Program to Calculate the Power of a Number
#include<stdio.h>
int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i = 1; i <= exp; i++)
        result *= base;

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}
