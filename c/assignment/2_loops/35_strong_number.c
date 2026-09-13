// 35. C Program to Check Strong Number

/* WHAT IS,
Strong number: sum of factorials of its digits equals the number
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 
*/

#include<stdio.h>
int main() {
    int n, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);

    return 0;
}
