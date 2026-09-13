// 53. C Program to Reverse a String Using Recursion
#include<stdio.h>
#include<string.h>

void reverseStr(char str[], int start, int end) {
    char temp;
    if(start >= end) return;
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseStr(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseStr(str, 0, strlen(str) - 1);
    printf("Reversed: %s\n", str);

    return 0;
}
