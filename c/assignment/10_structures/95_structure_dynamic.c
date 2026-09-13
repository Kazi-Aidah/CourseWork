// 95. C Program to Store Data in Structures Dynamically
#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n, i;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct Student*)malloc(n * sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("  Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("  Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s | Roll: %d | Marks: %.2f\n",
               i + 1, s[i].name, s[i].rollNo, s[i].marks);
    }

    free(s);

    return 0;
}
