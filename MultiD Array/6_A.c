//
// WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B.
// Now do C = A + B. Finally display all the elements from matrix / 2D array C.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int m;
    int b[100][100];
    int c[100][100];

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

            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            c[i][j] = a[i][j] + b[i][j];

            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}