//
// WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now determine whether the matrix is symmetric or not.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100][100];
    int flag = 1;

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
            b[j][i] = a[i][j];
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] != a[i][j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}