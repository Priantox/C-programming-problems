#include <stdio.h>
int main()
{
    int i;
    int j;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i == 5 || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}