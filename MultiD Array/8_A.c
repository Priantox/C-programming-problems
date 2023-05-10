//
// WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum
// element with index locationfrom that matrix. 
//

#include <stdio.h>
int main()
{
    int n;
    int m;
    int a[100][100];
    int q;
    int k;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (a[i][j] >= max)
            {
                max = a[i][j];

                q = i;
                k = j;
            }
        }
    }
    printf("\n");

    printf("Max: %d", max);
    printf("\nLocation: [%d][%d]", q, k);

    return 0;
}