#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    int l = 8;
    int m;
    int n;
    int o;
    int p;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        for (k = 1; k <= l; k++)
        {
            printf(" ");
        }
        l = l - 2;
        for (m = 0; m <= i; m++)
        {
            if (m % 2 == 0)
                printf("0");
            else
                printf("1");
        }

        printf("\n");
    }
    return 0;
}