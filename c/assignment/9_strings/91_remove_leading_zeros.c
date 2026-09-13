// 91. C Program to Remove Leading Zeros
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter a number string: ");
    scanf("%s", str);

    while(str[i] == '0' && str[i + 1] != '\0')
        i++;

    printf("Result: %s\n", str + i);

    return 0;
}
