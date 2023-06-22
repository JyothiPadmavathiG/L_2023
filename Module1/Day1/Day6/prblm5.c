#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(const struct Student* students, int size, const char* searchName) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);


    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
        printf("\n");
    }

    
    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    
    searchStudentByName(students, size, searchName);


    free(students);

    return 0;
}
