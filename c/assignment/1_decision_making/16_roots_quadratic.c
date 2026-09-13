// 16. C Program to Find the Roots of a Quadratic Equation
#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, disc, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if(disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } else if(disc == 0) {
        root1 = -b / (2 * a);
        printf("One repeated real root: %.2f\n", root1);
    } else {
        printf("No real roots (discriminant is negative).\n");
    }

    return 0;
}
