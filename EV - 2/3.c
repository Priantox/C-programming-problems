#include <stdio.h>
int main()
{
    float x;

    printf("Enter your Marks");
    scanf("%f", &x);

    if (x < 55)
    {
        printf("F");
    }
    else if (x >= 55 && x < 58)
    {
        printf("D");
    }
    else if (x >= 58 && x < 62)
    {
        printf("D+");
    }
    else if (x >= 62 && x < 66)
    {
        printf("C-");
    }
    else if (x >= 66 && x < 70)
    {
        printf("C");
    }
    else if (x >= 70 && x < 74)
    {
        printf("C+");
    }
    else if (x >= 74 && x < 78)
    {
        printf("B-");
    }
    else if (x >= 78 && x < 82)
    {
        printf("B");
    }
    else if (x >= 82 && x < 86)
    {
        printf("B+");
    }
    else if (x >= 86 && x < 90)
    {
        printf("A-");
    }
    else if (x >= 90 && x <= 100)
    {
        printf("A");
    }
    return 0;
}
