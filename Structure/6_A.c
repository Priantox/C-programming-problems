#include <stdio.h>

struct student
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{
    struct student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}
