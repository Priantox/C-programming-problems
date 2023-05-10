//
// WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now
// do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.
//

#include <stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            c[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}