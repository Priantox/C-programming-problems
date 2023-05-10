#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int m;
    int sum = 0;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\n");

    printf("%d", sum);

    return 0;
}