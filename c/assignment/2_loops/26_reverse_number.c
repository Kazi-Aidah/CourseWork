// 26. C Program to Reverse a Number
#include<stdio.h>
int main() {
    int n, reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed: %d\n", reversed);

    return 0;
}
