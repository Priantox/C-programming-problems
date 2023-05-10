#include <stdio.h>
int main()
{
    int i;
    int n = 5;
    int j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = i; j > 0; j--)
        {
            printf(" %c", (char)(j + 64));
        }
        for (j = 2; j <= i; j++)
        {
            printf(" %c", (char)(j + 64));
        }
        printf("\n");
    }

    return 0;
}