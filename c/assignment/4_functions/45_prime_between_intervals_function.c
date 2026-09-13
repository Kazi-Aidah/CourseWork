// 45. C Program to Display Prime Numbers Between Two Intervals Using Functions
#include<stdio.h>

int isPrime(int n) {
    int i;
    if(n < 2) return 0;
    for(i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b, i;

    printf("Enter two intervals: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d:\n", a, b);
    for(i = a; i <= b; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
