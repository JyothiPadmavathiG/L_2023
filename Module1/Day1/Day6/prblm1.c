#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char* token;
    char* context;

    // Tokenize the input string using whitespace as the delimiter
    token = strtok_s((char*)input, " ", &context);

    // Parse the input and initialize the array of structures
    int i = 0;
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok_s(NULL, " ", &context);
        strcpy(students[i].name, token);

        token = strtok_s(NULL, " ", &context);
        students[i].marks = atof(token);

        token = strtok_s(NULL, " ", &context);
        i++;
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    getchar();

    char input[100];
    printf("Enter the student details:\n");
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = '\0';

    parseString(input, students, size);


    printf("\nInitialized Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }


    free(students);

    return 0;
}
