#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        
        for (k = 1; k < (i * 2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}