// 85. C Program to Print the First Letter of Each Word
#include<stdio.h>
int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("First letters: ");
    if(str[0] != ' ' && str[0] != '\0')
        printf("%c ", str[0]);

    for(i = 1; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            printf("%c ", str[i + 1]);
    }
    printf("\n");

    return 0;
}
