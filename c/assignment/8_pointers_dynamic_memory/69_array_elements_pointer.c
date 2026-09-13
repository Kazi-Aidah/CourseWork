// 69. C Program to Access Array Elements Using Pointer
#include<stdio.h>
int main() {
    int arr[5], i;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Array elements using pointer:\n");
    for(i = 0; i < 5; i++)
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));

    return 0;
}
