#include <stdio.h>
int main()
{
    int i;
    int j;

    for (i = 7; i >= 1; i -= 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}