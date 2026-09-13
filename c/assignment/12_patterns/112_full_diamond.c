// 112. C Program to Print Full Diamond Pattern
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // upper half
    for(i = 1; i <= rows; i++) {
        for(j = rows; j > i; j--)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    
    // lower half
    for(i = rows - 1; i >= 1; i--) {
        for(j = rows; j > i; j--)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
