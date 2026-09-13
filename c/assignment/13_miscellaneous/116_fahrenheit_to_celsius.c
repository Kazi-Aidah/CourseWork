// 116. C Program to Calculate Fahrenheit to Celsius
// formula: c = (f - 32) * 5/9
#include<stdio.h>
int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0;

    printf("%.2f F = %.2f C\n", f, c);

    return 0;
}
