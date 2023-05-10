#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;

    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            k = 2;
        }
        else
        {
            k = 1;
        }
        for (j = 1; j <= i; j++, k += 2)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}