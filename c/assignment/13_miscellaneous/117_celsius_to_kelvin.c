// 117. C Program to Calculate Celsius to Kelvin
// formula: k = c + 273.15
#include<stdio.h>
int main() {
    float c, k;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("%.2f C = %.2f K\n", c, k);

    return 0;
}
