// 97. C Program to Add Two Complex Numbers Using Structures
#include<stdio.h>

struct Complex {
    float real, imag;
};

int main() {
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary parts of 1st complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of 2nd complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
