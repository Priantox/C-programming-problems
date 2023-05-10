#include <stdio.h>
void main()
{
    int i;
    int j;
    int diff;
    int value;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        diff = n - 1;
        value = i;

        for (j = 1; j <= i; j++)
        {
            printf("%4c", (char)(value + 64));
            value = value + diff;
            diff--;
        }
        printf("\n");
    }

    return 0;
}