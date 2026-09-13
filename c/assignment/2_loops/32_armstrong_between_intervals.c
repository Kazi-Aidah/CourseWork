// 32. C Program to Display Armstrong Numbers Between Two Intervals
#include<stdio.h>
#include<math.h>
int main() {
    int a, b, i, temp, digits, sum;

    printf("Enter two intervals: ");
    scanf("%d %d", &a, &b);

    printf("Armstrong numbers between %d and %d:\n", a, b);
    for(i = a; i <= b; i++) {
        temp = i; digits = 0; sum = 0;
        while(temp != 0) { digits++; temp /= 10; }
        temp = i;
        while(temp != 0) {
            sum += (int)pow(temp % 10, digits);
            temp /= 10;
        }
        if(sum == i)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
