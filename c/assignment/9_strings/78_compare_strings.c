// 78. C Program to Compare Two Strings
#include<stdio.h>
#include<string.h>
int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if(strcmp(s1, s2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
