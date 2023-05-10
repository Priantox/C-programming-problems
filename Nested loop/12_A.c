#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {

        for (int i = 1; i <= ((n / 2) + 1); i++)
        {
            for (int j = 1; j <= ((n / 2) + 1) - i; j++)
            {
                printf("_");
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }

            printf("\n");
        }

        for (int i = (n / 2); i >= 1; i--)
        {
            for (int j = 1; j <= (n / 2) - i + 1; j++)
            {
                printf("_");
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("Not valid\nPlease input odd number");
    }

    return 0;
}
