//
// WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise
// and column-wise.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100];
    int c[100];
    int k = 0;
    int m;
    int l = 0;

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
            b[k] = a[i][j];

            k++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            c[l] = a[j][i];
            l++;
        }
    }

    printf("Row-wise: ");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nColumn-wise: ");

    for (int i = 0; i < l; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}