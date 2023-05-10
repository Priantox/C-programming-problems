#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1, k = 'A'; j <= i; j++, k++)
        {
            printf("%d%c", j, k);
        }
        printf("\n");
    }
    return 0;
}