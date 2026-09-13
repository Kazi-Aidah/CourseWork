// 25. C Program to Count Number of Digits in an Integer
#include<stdio.h>
int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if(n == 0) {
        count = 1;
    } else {
        if(n < 0) n = -n;
        while(n != 0) {
            n /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
