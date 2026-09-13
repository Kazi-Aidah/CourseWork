// 34. C Program to Find the Sum of Digits of a Number
#include<stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
