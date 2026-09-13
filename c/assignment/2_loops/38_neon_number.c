// 38. C Program to Check Neon Number

// Neon: sum of digits of its square equals the number
// 9 --> 9 * 9 = 81 --> 8 + 1 = 9

#include<stdio.h>
int main() {
    int n, square, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;

    while(square != 0) {
        sum += square % 10;
        square /= 10;
    }

    if(sum == n)
        printf("%d is a Neon number.\n", n);
    else
        printf("%d is not a Neon number.\n", n);

    return 0;
}
