#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= n; j++)
                {

                    printf("*");
                }
            }

            if (i % 2 == 0)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (k == 1 || k == n)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("_");
                    }
                }
            }

            printf("\n");
        }
    }
    else
    {
        printf("Not valid\nPlease enter odd number");
    }

    return 0;
}