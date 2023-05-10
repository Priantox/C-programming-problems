#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    float cgpa;
};

void printStudentInfo(struct Student student)
{
    printf("\n");
    printf("\n");

    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("CGPA: %.2f\n", student.cgpa);
}

int main()
{
    struct Student student1, student2;

    printf("\n");

    // input for student1
    printf("Enter name for student - 1: ");
    gets(student1.name);
    printf("Enter ID for student - 1: ");
    scanf("%d", &student1.id);
    printf("Enter CGPA for student - 1: ");
    scanf("%f", &student1.cgpa);

    printf("\n");

    // input for student2
    printf("Enter name for student - 2: ");
    scanf("%s", student2.name);
    printf("Enter ID for student - 2: ");
    scanf("%d", &student2.id);
    printf("Enter CGPA for student - 2: ");
    scanf("%f", &student2.cgpa);

    if (student1.cgpa > student2.cgpa)
    {
        printf("Student1 has better CGPA:\n");
        printStudentInfo(student1);
    }
    else
    {
        printf("Student2 has better CGPA:\n");
        printStudentInfo(student2);
    }

    return 0;
}