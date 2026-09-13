// 92. C Program to Check for Pangram String
// A pangram contains every letter of the alphabet at least once
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    char str[200];
    int found[26] = {0}, i, isPangram = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]))
            found[tolower(str[i]) - 'a'] = 1;
    }

    for(i = 0; i < 26; i++) {
        if(!found[i]) {
            isPangram = 0;
            break;
        }
    }

    if(isPangram)
        printf("It is a pangram.\n");
    else
        printf("It is not a pangram.\n");

    return 0;
}
