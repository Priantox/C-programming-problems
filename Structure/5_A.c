#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int id;
    float cgpa;
} s;

int main()
{
    s x;

    x.id = 0112230300;
    x.cgpa = 4;
    strcpy(x.name, "Captain Roger");

    printf("\n");

    printf("Name: %s\n", x.name);
    printf("ID: %d\n", x.id);
    printf("CGPA: %.2f\n", x.cgpa);

    return 0;
}
