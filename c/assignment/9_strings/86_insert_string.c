// 86. C Program to Insert a String into Another String
#include<stdio.h>
#include<string.h>
int main() {
    char s1[200], s2[100], result[300];
    int pos, i, j, len1, len2;

    printf("Enter main string: ");
    scanf("%[^\n]", s1);
    printf("Enter string to insert: ");
    scanf(" %[^\n]", s2);
    printf("Enter position (0-based): ");
    scanf("%d", &pos);

    len1 = strlen(s1);
    len2 = strlen(s2);

    for(i = 0; i < pos; i++)
        result[i] = s1[i];
    for(j = 0; j < len2; j++)
        result[pos + j] = s2[j];
    for(i = pos; i <= len1; i++)
        result[len2 + i] = s1[i];

    printf("Result: %s\n", result);

    return 0;
}
