#include <stdio.h>
struct student
{
    char name[100];
    int id;
    float cgpa;
};

int main()
{
    struct student s;

    printf("Enter name: ");
    gets(s.name);

    printf("Enter id: ");
    scanf("%d", &s.id);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    // print the values of the members of the structure
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("CGPA: %f\n", s.cgpa);

    return 0;
}