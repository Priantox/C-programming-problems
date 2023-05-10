#include <stdio.h>

struct stark
{
    char name[100];
    int id;
    float cgpa;
};

int main()
{
    struct stark s[1];

    printf("Enter info: \n");
    printf("\n");

    scanf("%s", &s[0].name);
    scanf("%d", &s[0].id);
    scanf("%f", &s[0].cgpa);

    printf("\n");

    scanf("%s", &s[1].name);
    scanf("%d", &s[1].id);
    scanf("%f", &s[1].cgpa);

    printf("\n");

    printf("%s\n", s[0].name);
    printf("%d\n", s[0].id);
    printf("%0.2f\n", s[0].cgpa);

    printf("\n");

    printf("%s\n", s[1].name);
    printf("%d\n", s[1].id);
    printf("%0.2f\n", s[1].cgpa);

    return 0;
}