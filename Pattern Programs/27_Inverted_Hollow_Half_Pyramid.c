#include <stdio.h>
int main()
{
    int r;

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j < r; j++)
        {
            if (i == 1 || j == i || j == r - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}