// 89. C Program to Remove Duplicate Words from a String
#include<stdio.h>
#include<string.h>
int main() {
    char str[500], words[50][100], result[500] = "";
    int n = 0, i, j, isDup;
    char *token;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    token = strtok(str, " ");
    while(token != NULL) {
        isDup = 0;
        for(j = 0; j < n; j++) {
            if(strcmp(words[j], token) == 0) {
                isDup = 1;
                break;
            }
        }
        if(!isDup) {
            strcpy(words[n++], token);
            strcat(result, token);
            strcat(result, " ");
        }
        token = strtok(NULL, " ");
    }

    // remove trailing space
    int len = strlen(result);
    if(len > 0) result[len - 1] = '\0';

    printf("Result: %s\n", result);

    return 0;
}
