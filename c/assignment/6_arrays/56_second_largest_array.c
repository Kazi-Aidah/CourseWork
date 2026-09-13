// 56. C Program to Find the Second Largest Element in an Array
#include<stdio.h>
int main() {
    int n, i;
    float arr[100], largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    largest = arr[0]; second = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest = %.2f\n", second);

    return 0;
}
