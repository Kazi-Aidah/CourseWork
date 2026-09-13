// 115. C Program to Print Reverse Floyd's Triangle
#include<stdio.h>
int main() {
    int rows, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    num = rows * (rows + 1) / 2;

    for(i = rows; i >= 1; i--) {
        num -= i;
        int start = num + 1;
        for(j = 0; j < i; j++)
            printf("%d ", start + j);
        printf("\n");
    }

    return 0;
}
