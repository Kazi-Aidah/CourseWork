// 88. C Program to Count Occurrences of Each Character
#include<stdio.h>
#include<string.h>
int main() {
    char str[200];
    int count[256] = {0}, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(count[i] > 0)
            printf("'%c': %d\n", i, count[i]);
    }

    return 0;
}
