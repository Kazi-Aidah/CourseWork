// 40. C Program to Convert Octal to Decimal and Vice Versa
#include<stdio.h>
#include<math.h>

int octToDec(int oct) {
    int dec = 0, i = 0, rem;
    while(oct != 0) {
        rem = oct % 10;
        dec += rem * (int)pow(8, i);
        oct /= 10;
        i++;
    }
    return dec;
}

int decToOct(int dec) {
    int oct = 0, i = 1, rem;
    while(dec != 0) {
        rem = dec % 8;
        oct += rem * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int main() {
    int choice;
    printf("1. Octal to Decimal\n2. Decimal to Octal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        int oct;
        printf("Enter octal number: ");
        scanf("%d", &oct);
        printf("Decimal: %d\n", octToDec(oct));
    } else {
        int dec;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        printf("Octal: %d\n", decToOct(dec));
    }

    return 0;
}
