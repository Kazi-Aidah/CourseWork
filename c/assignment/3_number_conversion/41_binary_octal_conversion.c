// 41. C Program to Convert Binary to Octal and Vice Versa
#include<stdio.h>
#include<math.h>

// binary -> decimal -> octal
int binToDec(long long bin) {
    int dec = 0, i = 0, rem;
    while(bin != 0) {
        rem = bin % 10;
        dec += rem * (int)pow(2, i);
        bin /= 10;
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

long long decToBin(int dec) {
    long long bin = 0;
    int i = 1, rem;
    while(dec != 0) {
        rem = dec % 2;
        bin += rem * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

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

int main() {
    int choice;
    printf("1. Binary to Octal\n2. Octal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        long long bin;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        printf("Octal: %d\n", decToOct(binToDec(bin)));
    } else {
        int oct;
        printf("Enter octal number: ");
        scanf("%d", &oct);
        printf("Binary: %lld\n", decToBin(octToDec(oct)));
    }

    return 0;
}
