#include <stdio.h>
void main()
{
    int i;
    int j;
    int k;
    int n = 5;

    for (i = n; i >= 1; i--)
    {
        k = i;
        for (j = 1; j <= i; j++, k++)
        {
            printf("%c", (char)(k + 64));
        }
        printf("\n");
    }

    return 0;
}