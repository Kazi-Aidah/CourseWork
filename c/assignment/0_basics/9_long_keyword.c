// 9. C Program to Demonstrate the Working of long Keyword
#include<stdio.h>
int main() {
    long int a = 2147483647;
    long long int b = 922337203685477580777;

    printf("long int: %ld\n", a);
    printf("long long int: %lld\n", b);
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));

    return 0;
}
