#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimePeriod(struct Time* timePtr) {
    printf("Enter the time period:\n");
    
    printf("Hours: ");
    scanf("%d", &(timePtr->hours));
    
    printf("Minutes: ");
    scanf("%d", &(timePtr->minutes));
    
    printf("Seconds: ");
    scanf("%d", &(timePtr->seconds));
}

void printTimePeriod(struct Time time) {
    printf("%d hours, %d minutes, %d seconds\n", time.hours, time.minutes, time.seconds);
}

struct Time calculateDifference(struct Time time1, struct Time time2) {
    struct Time difference;
    
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int diffSeconds = totalSeconds1 - totalSeconds2;
    
    difference.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    
    difference.minutes = diffSeconds / 60;
    difference.seconds = diffSeconds % 60;
    
    return difference;
}

int main() {
    struct Time time1, time2, difference;
    
    printf("Enter the first time period:\n");
    getTimePeriod(&time1);
    
    printf("Enter the second time period:\n");
    getTimePeriod(&time2);
    
    printf("\n");
    
    printf("First time period: ");
    printTimePeriod(time1);
    
    printf("Second time period: ");
    printTimePeriod(time2);
    
    printf("\n");
    
    difference = calculateDifference(time1, time2);
    
    printf("Difference between the time periods: ");
    printTimePeriod(difference);
    
    return 0;
}
