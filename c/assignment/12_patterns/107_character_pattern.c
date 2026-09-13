// 107. C Program to Print Character Pattern
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}
