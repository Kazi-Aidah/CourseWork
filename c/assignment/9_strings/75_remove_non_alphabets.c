// 75. C Program to Remove All Characters Except Alphabets
#include<stdio.h>
#include<ctype.h>
int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]))
            str[j++] = str[i];
    }
    str[j] = '\0';

    printf("Result: %s\n", str);

    return 0;
}
