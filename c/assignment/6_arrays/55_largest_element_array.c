// 55. C Program to Find the Largest Element in an Array
#include<stdio.h>
int main() {
    int n, i;
    float arr[100], largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

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

    return 0;
}
