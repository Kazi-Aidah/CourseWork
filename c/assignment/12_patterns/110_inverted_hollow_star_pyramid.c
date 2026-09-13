// 110. C Program to Print Inverted Hollow Star Pyramid
#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        for(j = rows; j > i; j--)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1) || i == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
