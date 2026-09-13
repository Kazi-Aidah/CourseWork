// 113. C Program to Print Pascal's Triangle
#include<stdio.h>
int main() {
    int rows, i, j, coef;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        coef = 1;
        for(j = rows; j > i; j--)
            printf(" ");
        for(j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
