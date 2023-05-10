#include <stdio.h>

int main()
{

    int year;
    int family;
    char cat;
    float income;

    printf("Input exactly capital X or Y or Z category \n");
    scanf("%c%d%d%f", &cat, &year, &family, &income);

    if (cat != 'X' && cat != 'Y' && cat != 'Z')
    {
        printf("Invalid input a valid category");
    }
    else if ((cat == 'X' && cat == 'Y' && cat == 'Z') && (year >= 12 && family > 5) || income < 1000.50)
    {
        printf("get bonous");
    }
    else if ((cat == 'Y' || cat == 'Z') && family > 8 && income < 1100.78)
    {
        printf("get bonous");
    }
    else if (cat == 'X' && family > 5)
    {
        printf("get bonous");
    }
    else
    {
        printf("not get bonous");
    }
    return 0;
}