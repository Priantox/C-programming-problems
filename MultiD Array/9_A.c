//
// WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must
// be an odd number). Then calculate sum of the integers at first row, last row and two
// diagonals without overlap. Please see the sample input-output.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100][100];
    int sum = 0;

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

            if (i == 0 || i == n - 1 || (i > 0 && j == i && i < n - 1) || (i > 0 && i < n - 1 && j == n - i - 1))
            {
                sum += a[i][j];
            }
        }
    }

    printf("\n");
    printf("%d", sum);

    return 0;
}