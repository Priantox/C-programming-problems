#include <stdio.h>
int main()
{
    int i;
    int j;
    int z;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}