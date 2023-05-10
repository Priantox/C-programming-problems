#include <stdio.h>
int main()
{
    int n;
    printf("Enter the height: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {

        for (int i = 1; i <= n; i++)
        {
            if (i == (n / 2) + 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("+");
                }
                printf("\n");
            }
            else
            {
                for (int i = 1; i <= (n / 2); i++)
                {
                    printf(" ");
                }
                printf("+");
                printf("\n");
            }
        }
    }
    else
    {
        printf("Not valid");
    }
    return 0;
}