// 104. C Program to Print 180° Rotated Pyramid
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        for(j = rows; j > i; j--)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
