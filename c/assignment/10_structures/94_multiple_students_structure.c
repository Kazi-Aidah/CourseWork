// 94. C Program to Store Information of Multiple Students Using Structure
#include<stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("  Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("  Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for(i = 0; i < 5; i++) {
        printf("%d. %s | Roll: %d | Marks: %.2f\n",
               i + 1, s[i].name, s[i].rollNo, s[i].marks);
    }

    return 0;
}
