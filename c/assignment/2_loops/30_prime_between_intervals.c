// 30. C Program to Display Prime Numbers Between Two Intervals
#include<stdio.h>
int main() {
    int a, b, i, j, isPrime;

    printf("Enter two intervals: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d:\n", a, b);
    for(i = a; i <= b; i++) {
        if(i < 2) continue;
        isPrime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
