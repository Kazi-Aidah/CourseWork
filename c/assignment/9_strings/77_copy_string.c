// 77. C Program to Copy String Without Using strcpy()
#include<stdio.h>
int main() {
    char src[100], dest[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", src);

    for(i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    printf("Copied: %s\n", dest);

    return 0;
}
