//
// WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.
//

#include <stdio.h>
int main()
{
    int m;
    int n;
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (k != i || l != j)
                    {
                        if (arr[i][j] == arr[k][l])
                        {
                            arr[k][l] = -1;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}