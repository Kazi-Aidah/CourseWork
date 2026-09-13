// 96. C Program to Add Two Distances Using Structures
#include<stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter 1st distance (feet, inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter 2nd distance (feet, inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet++;
    }

    printf("Sum = %d feet %.1f inches\n", sum.feet, sum.inch);

    return 0;
}
