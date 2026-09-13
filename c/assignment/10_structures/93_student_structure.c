// 93. C Program to Store Information of a Student Using Structure
#include<stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Info ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
