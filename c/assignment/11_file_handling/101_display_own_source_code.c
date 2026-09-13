// 101. C Program to Display Its Own Source Code
#include<stdio.h>
int main() {
    FILE *fp;
    char ch;

    fp = fopen(__FILE__, "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}
