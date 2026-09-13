// 31. C Program to Check Armstrong Number
#include<stdio.h>
#include<math.h>
int main() {
    int n, original, digits = 0, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        sum += (int)pow(temp % 10, digits);
        temp /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
