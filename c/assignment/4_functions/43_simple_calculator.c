//  17. Simple Choice-Based Calculator
#include<stdio.h>
int main() {
    float a, b;
    int choice;

    printf("Enter a number: ");
    scanf("%f", &a);

    printf("Choose an operator:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice); // operator choice
    printf("%d selected!\nEnter another number: ", choice);
    scanf("%f", &b);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", a + b);
            break;
        case 2:
            printf("Result: %.2f\n", a - b);
            break;
        case 3:
            printf("Result: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Error: Division by zero!\n");
            else
                printf("Result: %.2f\n", a / b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}