#include <stdio.h>
int main()
{
    int i;
    int j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf(" ");
        }

        for (j = 2; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}