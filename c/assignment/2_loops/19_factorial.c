// 12. Find the Factorial of a Number
#include<stdio.h>
int main() {
    int n, i; long long fact = 1;
    
    printf("Input a number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("%lld\n", fact);
    
    return 0;
}