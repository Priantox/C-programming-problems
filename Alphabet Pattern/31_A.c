#include <stdio.h>
int main()
{
    int m = 0;
    int p = 5;
    int p_space = p - 1;
    int i;
    int j;
    int k;

    for (i = 0; i < p; i++)
    {
        for (j = p_space; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= m; k++)
        {
            printf("%c", m + 65);
        }
        m += 2;
        printf("\n");
    }

    return 0;
}