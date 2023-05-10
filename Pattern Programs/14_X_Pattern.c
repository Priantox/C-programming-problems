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
            for (int j = 1; j <= n; j++)
            {
                if (i == j || j == n - i + 1)
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
    }
    else
    {
        printf("Not valid");
    }
    return 0;
}