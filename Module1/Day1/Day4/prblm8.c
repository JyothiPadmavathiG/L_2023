#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char *timeString) {
    char *token;
    char *delimiter = ":";
    unsigned long totalSeconds = 0;
    unsigned long hh, mm, ss;

    
    char timeCopy[strlen(timeString) + 1];
    strcpy(timeCopy, timeString);
    token = strtok(timeCopy, delimiter);
    hh = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    mm = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    ss = strtoul(token, NULL, 10);

    
    totalSeconds = hh * 3600 + mm * 60 + ss;

    return totalSeconds;
}

int main() {
    const char *timeString1 = "10:12:50";
    const char *timeString2 = "13:10:40";

    unsigned long totalSeconds1 = computeTotalSeconds(timeString1);
    unsigned long totalSeconds2 = computeTotalSeconds(timeString2);

    printf("Time 1: %s\nTotal seconds 1: %lu\n", timeString1, totalSeconds1);
    printf("Time 2: %s\nTotal seconds 2: %lu\n", timeString2, totalSeconds2);

    return 0;
}
