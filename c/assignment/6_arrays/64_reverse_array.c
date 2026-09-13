// 64. C Program to Reverse an Array
#include<stdio.h>
int main() {
    int n, i, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Reversed: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
