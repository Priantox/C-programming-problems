#include <stdio.h>
int main()
{
    int m = 1;
    int p = 5;
    int space = p - 1;
    int i;
    int j;
    int k;

    for (i = 0; i < p; i++)
    {
        for (j = space; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < m; k++)
        {
            printf("%c", i + 65);
        }
        m += 2;

        printf("\n");
    }

    return 0;
}