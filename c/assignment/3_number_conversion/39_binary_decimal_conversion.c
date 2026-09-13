// 39. C Program to Convert Binary to Decimal and Vice Versa
#include<stdio.h>
#include<math.h>

// binary to decimal
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

// decimal to binary
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

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        long long bin;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        printf("Decimal: %d\n", binToDec(bin));
    } else {
        int dec;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        printf("Binary: %lld\n", decToBin(dec));
    }

    return 0;
}
