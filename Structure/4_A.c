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

    printf("Enter id: ");
    scanf("%d", &s.id);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);


    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("CGPA: %f\n", s.cgpa);

    return 0;
}
