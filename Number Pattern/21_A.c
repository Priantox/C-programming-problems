#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;

    for (i = 5; i >= 1; i--)
    {
        k = i;
        for (j = 1; j <= 5; j++)
        {
            if (k <= 5)
            {
                printf("%d", k);
            }
            else
            {
                printf("5");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}