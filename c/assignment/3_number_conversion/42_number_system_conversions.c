// 42. C Program for Number System Conversions
#include<stdio.h>
#include<math.h>

int binToDec(long long bin) {
    int dec = 0, i = 0, rem;
    while(bin != 0) { rem = bin%10; dec += rem*(int)pow(2,i); bin/=10; i++; }
    return dec;
}
long long decToBin(int dec) {
    long long bin = 0; int i=1,rem;
    while(dec!=0) { rem=dec%2; bin+=rem*i; dec/=2; i*=10; }
    return bin;
}
int decToOct(int dec) {
    int oct=0,i=1,rem;
    while(dec!=0) { rem=dec%8; oct+=rem*i; dec/=8; i*=10; }
    return oct;
}
int octToDec(int oct) {
    int dec=0,i=0,rem;
    while(oct!=0) { rem=oct%10; dec+=rem*(int)pow(8,i); oct/=10; i++; }
    return dec;
}
void decToHex(int dec) {
    char hex[20]; int i=0;
    while(dec!=0) {
        int rem=dec%16;
        hex[i++]=(rem<10)?('0'+rem):('A'+rem-10);
        dec/=16;
    }
    for(int j=i-1;j>=0;j--) printf("%c",hex[j]);
    printf("\n");
}

int main() {
    int choice, num;
    printf("Number System Conversions\n");
    printf("1. Decimal to Binary\n2. Decimal to Octal\n3. Decimal to Hex\n");
    printf("4. Binary to Decimal\n5. Octal to Decimal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter number: ");
    scanf("%d", &num);

    switch(choice) {
        case 1: printf("Binary: %lld\n", decToBin(num)); break;
        case 2: printf("Octal: %d\n", decToOct(num)); break;
        case 3: printf("Hex: "); decToHex(num); break;
        case 4: printf("Decimal: %d\n", binToDec(num)); break;
        case 5: printf("Decimal: %d\n", octToDec(num)); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
