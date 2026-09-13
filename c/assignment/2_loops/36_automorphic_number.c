// 36. C Program to Check Automorphic Number

// Automorphic: square ends with the number itself
// 5 -> 25 (ends in 5), 25 -> 625 (ends in 25)

#include<stdio.h>
int main() {
    int n, square, digits = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;

    temp = n;
    while(temp != 0) {
        digits *= 10;
        temp /= 10;
    }

    if(square % digits == n)
        printf("%d is an Automorphic number.\n", n);
    else
        printf("%d is not an Automorphic number.\n", n);

    return 0;
}
