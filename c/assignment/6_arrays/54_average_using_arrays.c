// 54. C Program to Calculate Average Using Arrays
#include<stdio.h>
int main() {
    int n, i;
    float arr[100], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f\n", sum / n);

    return 0;
}
