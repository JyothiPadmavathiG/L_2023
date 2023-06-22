#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student* student1, struct Student* student2) {
    
    char tempName[50];
    strcpy(tempName, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, tempName);

    
    int tempAge = student1->age;
    student1->age = student2->age;
    student2->age = tempAge;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &(student1.age));

    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &(student2.age));

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);


    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);

    return 0;
}
