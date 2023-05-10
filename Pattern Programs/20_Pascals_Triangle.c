#include <stdio.h>
int main()
{
    int n;
    int c = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k <= i; k++)
        {
            if (i == 0 || k == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - k + 1) / k;
            }
            printf("%4d", c);
        }
        printf("\n");
    }

    return 0;
}