// 99. C Program to Write a Sentence to a File
#include<stdio.h>
int main() {
    FILE *fp;
    char sentence[200];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    fp = fopen("sentence.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "%s\n", sentence);
    fclose(fp);

    printf("Sentence written to sentence.txt\n");

    return 0;
}

// this is so fun omg