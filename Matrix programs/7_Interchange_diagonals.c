#include <stdio.h>
int main()
{
    int n;
    int a[100][100];

    scanf("%d", &n);

    printf("Enter elements in matrix of size: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    printf("Matrix after diagonals interchanged: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}