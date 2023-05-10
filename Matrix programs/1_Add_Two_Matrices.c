#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100][100];
    int i;
    int j;
    int c[100][100];

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
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrices A+B = \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}