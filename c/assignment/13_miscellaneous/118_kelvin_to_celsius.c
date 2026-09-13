// 118. C Program to Calculate Kelvin to Celsius
// formula: c = k - 273.15
#include<stdio.h>
int main() {
    float k, c;

    printf("Enter temperature in Kelvin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("%.2f K = %.2f C\n", k, c);

    return 0;
}
