// 44. C Program to Check Prime Number Using User-Defined Function
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
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
