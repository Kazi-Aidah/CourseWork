// 71. C Program to Find Largest Number Using Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i;
    float *arr, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (float*)malloc(n * sizeof(float));
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest = %.2f\n", largest);
    free(arr);

    return 0;
}
