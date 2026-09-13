// 48. C Program to Find the Sum of Natural Numbers Using Recursion
#include<stdio.h>

int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
