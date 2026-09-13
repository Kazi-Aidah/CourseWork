// 84. C Program to Count Words in a String
#include<stdio.h>
int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            words++;
    }
    if(str[0] != '\0') words++; // count first word

    printf("Word count = %d\n", words);

    return 0;
}
