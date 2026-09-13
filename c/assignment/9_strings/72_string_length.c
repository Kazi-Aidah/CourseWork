// 72. C Program to Find the Length of a String
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);
    printf("Length = %d\n", len);

    return 0;
}
