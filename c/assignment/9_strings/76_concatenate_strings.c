// 76. C Program to Concatenate Two Strings
// Concatenate; as in join.

#include<stdio.h>
#include<string.h>

int main() {
    char s1[200], s2[100];

    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    strcat(s1, s2);
    printf("Concatenated: %s\n", s1);

    return 0;
}
