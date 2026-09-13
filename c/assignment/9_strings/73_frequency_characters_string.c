// 73. C Program to Find the Frequency of Characters in a String
#include<stdio.h>
#include<string.h>
int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter character to find: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
