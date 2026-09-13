// 79. C Program to Compare Two Strings Lexicographically
#include<stdio.h>
#include<string.h>
int main() {
    char s1[100], s2[100];
    int result;

    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    result = strcmp(s1, s2);

    if(result == 0)
        printf("Strings are equal.\n");
    else if(result < 0)
        printf("\"%s\" comes before \"%s\"\n", s1, s2);
    else
        printf("\"%s\" comes after \"%s\"\n", s1, s2);

    return 0;
}
