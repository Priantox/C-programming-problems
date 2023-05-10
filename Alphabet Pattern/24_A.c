#include <stdio.h>
int main()
{
    int i;
    int j;
    int k = 0;
    int l = 1;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++, k++, l++)
        {
            if (k % 2 == 0)
            {
                printf("%4c", (char)(l + 96));
            }
            else
            {
                printf("%4c", (char)(l + 64));
            }
        }
        printf("\n");
    }

    return 0;
}