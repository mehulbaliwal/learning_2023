#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};
void take_time(struct Time *p){
    printf("Enter hour  : ");
    scanf("%d",&(p->hours));
    printf("Enter minutes : ");
    scanf("%d",&(p->minutes));
    printf("Enter seconds : ");
    scanf("%d",&(p->seconds));
}
void calculateTimeDifference(struct Time t1, struct Time t2, struct Time *difference) {
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    difference->hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    difference->minutes = diffSeconds / 60;
    difference->seconds = diffSeconds % 60;
}

int main() {
    struct Time time1, time2, difference;

    take_time(&time1);
    take_time(&time2);

    calculateTimeDifference(time1, time2, &difference);
    if(difference.hours<0){
        printf("\nDifference between the two time periods: ");
    printf("%.2d:%.2d:%.2d\n", -1*difference.hours, -1 * difference.minutes, -1 * difference.seconds);
    }else{
        printf("\nDifference between the two time periods: ");
    printf("%.2d:%.2d:%.2d\n", difference.hours, difference.minutes, difference.seconds);
    }
    
    return 0;
}