// 102. C Program to Print Simple Pyramid Pattern
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) { // row
        for(j = 1; j <= i; j++) // column
            printf("* ");
        printf("\n");
    }

    return 0;
}
