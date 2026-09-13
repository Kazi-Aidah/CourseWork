// Celsius-Fahrenheit Conversion
// C formula: c = (f - 32) * 5/9;
// F formula: f = (c * 9/5) + 32;

#include<stdio.h>
#include<string.h>
int main() {
    char choose;
    float c, f;
    printf("C or F?\n");
    scanf("%c", &choose);
    
    if(choose == 'c') {
        printf("Enter a Celsius: ");
        scanf("%f", &c);
        f = (c * 9/5) + 32;
        printf("%f", f);
    }
    else {
        printf("Enter a Fanrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5/9;
        printf("%f", c);
    }
    
    return 0;
}