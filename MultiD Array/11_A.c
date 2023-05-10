#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i % 2 != 0) || (j % 2 != 0 && i % 2 == 0))
            {
                sum += a[i][j];
            }
        }
    }
    printf("\n");
    printf("%d", sum);

    return 0;
}