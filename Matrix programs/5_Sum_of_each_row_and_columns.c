#include <stdio.h>
int main()
{
    int n;
    int a[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }

        printf("Sum of elements of Row %d = %d\n", i + 1, sum);
        sum = 0;
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }

        printf("Sum of elements of column %d = %d\n", i + 1, sum);
        sum = 0;
    }

    return 0;
}