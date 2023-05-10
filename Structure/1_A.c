#include <stdio.h>

struct stark
{
    char name[100];
    char id[100];
    float cgpa;
} s;

int main()
{
    printf("Enter name: ");
    gets(s.name);

    printf("Enter ID: ");
    gets(s.id);

    printf("Enter cgpa: ");
    scanf("%f", &s.cgpa);

    printf("\n");

    printf("Name: ");
    puts(s.name);

    printf("ID: ");
    puts(s.id);

    printf("Enter cgpa: %0.2f", s.cgpa);

    return 0;
}
