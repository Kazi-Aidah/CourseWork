// 57. C Program to Find Maximum and Minimum in an Array
#include<stdio.h>
int main() {
    int n, i;
    float arr[100], max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    max = arr[0]; min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Maximum = %.2f\n", max);
    printf("Minimum = %.2f\n", min);

    return 0;
}
