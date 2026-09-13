// 120. C Program to Calculate Power Without Using pow()
#include<stdio.h>
int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i = 0; i < exp; i++)
        result *= base;

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}
