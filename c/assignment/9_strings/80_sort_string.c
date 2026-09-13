// 80. C Program to Sort a String
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i, j, n;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    n = strlen(str);
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted: %s\n", str);

    return 0;
}
