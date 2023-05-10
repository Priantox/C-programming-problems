#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    for (i = 5; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            k = 1;
        }
        else
        {
            k = i;
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", k);
            if (i % 2 == 1)
                k++;
            else
                k--;
        }
        printf("\n");
    }
    return 0;
}