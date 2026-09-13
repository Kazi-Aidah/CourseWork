// 51. C Program to Calculate Power Using Recursion

#include<stdio.h>

long long power(int base, int exp) {
    if(exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%d^%d = %lld\n", base, exp, power(base, exp));

    return 0;
}
