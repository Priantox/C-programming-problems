#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100][100];
    int i;
    int j;
    int flag = 1;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter elements in matrix A of size: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements in matrix B of size: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Matrix A is equal to Matrix B");
    }
    else
    {
        printf("Matrix A is not equal to Matrix B");
    }

    return 0;
}