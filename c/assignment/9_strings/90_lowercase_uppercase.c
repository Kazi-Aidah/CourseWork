// 90. C Program to Convert Lowercase to Uppercase and Vice Versa
#include<stdio.h>
#include<ctype.h>
int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Converted: %s\n", str);

    return 0;
}
