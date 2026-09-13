// 68. C Program to Multiply Two Matrices by Passing Matrix to a Function
#include<stdio.h>

void multiply(int a[3][3], int b[3][3], int result[3][3]) {
    int i, j, k;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main() {
    int a[3][3], b[3][3], result[3][3], i, j;

    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    multiply(a, b, result);

    printf("Product:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
