//
// WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the
// elements of its two diagonals. 
//

#include <stdio.h>
int main()
{
    int n;
    int a[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    printf("Major diagonal: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    printf("Minor diagonal: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - i - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}