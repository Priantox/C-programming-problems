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
        for (j = 1; j <= i; j++)
        {
            if (i == 5 || j == 1 || j == i)
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