// 74. C Program to Count Vowels, Consonants, Digits, and Spaces

#include<stdio.h>
#include<ctype.h>
int main() {
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    char c;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) { // remember: '\0' is NULL
        c = tolower(str[i]);
        if(isdigit(c))
            digits++;
        else if(c == ' ')
            spaces++;
        else if(isalpha(c)) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}
