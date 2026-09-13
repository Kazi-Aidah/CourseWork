// 98. C Program to Calculate Difference Between Two Time Periods
#include<stdio.h>

struct Time {
    int hours, minutes, seconds;
};

int main() {
    struct Time t1, t2, diff;
    int s1, s2, ds;

    printf("Enter start time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter end time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // to seconds
    s1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    s2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    ds = s2 - s1;
    if(ds < 0) ds += 86400; // remebmer midnight

    diff.hours = ds / 3600;
    diff.minutes = (ds % 3600) / 60;
    diff.seconds = ds % 60;

    printf("Difference = %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
