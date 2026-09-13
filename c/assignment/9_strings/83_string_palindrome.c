// 83. C Program to Check Whether a String is Palindrome
#include<stdio.h>
#include<string.h>
int main() {
    char str[100], rev[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    n = strlen(str);
    for(i = 0; i < n; i++)
        rev[i] = str[n - 1 - i];
    rev[n] = '\0';

    if(strcmp(str, rev) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
