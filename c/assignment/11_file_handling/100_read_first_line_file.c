// 100. C Program to Read the First Line from a File
#include<stdio.h>
int main() {
    FILE *fp;
    char line[200];

    fp = fopen("sentence.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fgets(line, sizeof(line), fp);
    printf("First line: %s", line);
    fclose(fp);

    return 0;
}
