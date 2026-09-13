// 46. C Program to Check Prime or Armstrong Number Using User-Defined Function
#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    int i;
    if(n < 2) return 0;
    for(i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while(temp != 0) { digits++; temp /= 10; }
    temp = n;
    while(temp != 0) {
        sum += (int)pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    if(isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
