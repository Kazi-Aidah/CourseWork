// 81. C Program to Sort Strings in Lexicographical Order
#include<stdio.h>
#include<string.h>
int main() {
    int n, i, j;
    char str[10][100], temp[100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]", str[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("Sorted:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", str[i]);

    return 0;
}
