// 5. C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main() {
    float a, b, product;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);
    product = a * b;
    printf("Product = %f\n", product);

    return 0;
}