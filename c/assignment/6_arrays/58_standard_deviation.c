// 58. C Program to Calculate Standard Deviation
#include<stdio.h>
#include<math.h>
int main() {
    int n, i;
    float arr[100], sum = 0, mean, variance = 0, sd;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for(i = 0; i < n; i++)
        variance += (arr[i] - mean) * (arr[i] - mean);

    sd = sqrt(variance / n);
    printf("Standard Deviation = %.2f\n", sd);

    return 0;
}
