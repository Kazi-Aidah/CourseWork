// 37. C Program to Check Perfect Number

// Perfect: sum of its proper divisors equals the number
// 6 = 1 + 2 + 3

#include<stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);

    return 0;
}
