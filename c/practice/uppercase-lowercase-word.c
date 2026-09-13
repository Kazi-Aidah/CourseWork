// input lowercase, get uppercase & vice versa
// WORD ASCII EDITION
#include<stdio.h>
#include <ctype.h>

int main() {
    char str[100], *p = str; // *p = pointer
    scanf("%99s", str);
    while (*p) { 
        if (isalpha(*p))    // only letters
            *p ^= 32;       // flip case
        p++;
    }
    printf("%s\n", str);
    return 0;
}