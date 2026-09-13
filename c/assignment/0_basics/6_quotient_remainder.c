// 6. C Program to Compute Quotient and Remainder
#include<stdio.h>
int main() {
    int a, b;

    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);

    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
