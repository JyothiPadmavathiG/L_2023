#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_FIELD_SIZE 50

struct LogEntry {
    int entryNo;
    char sensorNo[MAX_FIELD_SIZE];
    float temperature;
    int humidity;
    int light;
    char timestamp[MAX_FIELD_SIZE];
};

struct LogEntry logData[MAX_ENTRIES];
int numEntries = 0;

void extractData(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    char line[MAX_FIELD_SIZE * 6];
    fgets(line, sizeof(line), file); 

    while (fgets(line, sizeof(line), file) != NULL) {
        char *token;
        token = strtok(line, ",");
        
        logData[numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logData[numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logData[numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logData[numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logData[numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        token[strcspn(token, "\r\n")] = '\0'; 
        strcpy(logData[numEntries].timestamp, token);

        numEntries++;
    }

    fclose(file);
}

void displayData() {
    printf("%-8s%-10s%-12s%-9s%-7s%s\n", "EntryNo", "SensorNo", "Temperature", "Humidity", "Light", "Timestamp");
    for (int i = 0; i < numEntries; i++) {
        printf("%-8d%-10s%-12.1f%-9d%-7d%s\n",
               logData[i].entryNo,
               logData[i].sensorNo,
               logData[i].temperature,
               logData[i].humidity,
               logData[i].light,
               logData[i].timestamp);
    }
}

int main() {
    const char *filename = "data.csv";

    extractData(filename);

    printf("Log Data:\n");
    displayData();

    return 0;
}
