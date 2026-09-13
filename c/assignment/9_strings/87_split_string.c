// 87. C Program to Split a String into Substrings
#include<stdio.h>
#include<string.h>
int main() {
    char str[200], delim;
    char *token;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter delimiter character: ");
    scanf(" %c", &delim);

    char delimStr[2] = {delim, '\0'};
    token = strtok(str, delimStr);
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimStr);
    }

    return 0;
}
