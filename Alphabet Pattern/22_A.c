#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c", (char)(i + 64));
        }
        printf("\n");
    }

    return 0;
}