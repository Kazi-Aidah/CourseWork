// 119. C Program to Calculate the Sum of Fibonacci Numbers at Even Indexes
// Even indexes: 0, 2, 4, 6...
#include<stdio.h>
int main() {
    int n, i, a = 0, b = 1, next, sum = 0;

    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            sum += a;
        next = a + b;
        a = b;
        b = next;
    }

    printf("Sum of Fibonacci at even indexes = %d\n", sum);

    return 0;
}
