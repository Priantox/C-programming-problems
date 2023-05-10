#include <stdio.h>

struct stark
{
    char name[100];
    char id[100];
    float cgpa;
};

int main()
{
    struct stark s = {"Winter Soldier", "0112230300", 4};

    printf("Name: ");
    puts(s.name);

    printf("ID: ");
    puts(s.id);

    printf("Enter cgpa: %0.2f", s.cgpa);

    return 0;
}
