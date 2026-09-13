// 82. C Program to Reverse a String
#include<stdio.h>
#include<string.h>
int main() {
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    n = strlen(str);
    for(i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed: %s\n", str);

    return 0;
}
