#include <stdio.h>
int main()
{
    int n;
    int space = 1;

    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (i == n || k == 1 || k == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        space++;

        printf("\n");
    }

    return 0;
}