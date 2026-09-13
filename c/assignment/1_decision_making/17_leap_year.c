// 15. Check Leap Year
// 1990 = not, 2000 & 2024 = yes
#include<stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    
    // pri: must be divisible by 4
    // sec: either not century or proper leap century
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("%d is a leap year.", year);
    } else { printf("Nope!"); }

    return 0;
}