// 47. C Program to Check Whether a Number Can Be Expressed as Sum of Two Primes
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
    int n, i, found = 0;

    printf("Enter a positive even number: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; i++) {
        if(isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    if(!found)
        printf("%d cannot be expressed as sum of two prime numbers.\n", n);

    return 0;
}
