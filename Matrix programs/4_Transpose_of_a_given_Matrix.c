#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int b[100][100];
    int i;
    int j;

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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix A: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}