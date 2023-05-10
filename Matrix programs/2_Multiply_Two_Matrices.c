#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100][100];
    int i;
    int j;
    int c[100][100];
    int sum = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter elements in matrix A of size: \n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    printf("Enter elements in matrix B of size: \n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &b[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            for (int k = 0; k < n; k++)
            {
                sum += a[row][k] * b[k][col];
            }

            c[row][col] = sum;
            sum = 0;
        }
    }

    printf("\nProduct of matrix A * B = \n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}