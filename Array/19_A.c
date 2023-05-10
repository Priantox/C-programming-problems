//
// WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse
// that matrix within itself and display it. Reversal means swap 1st column with the nth
// column, swap 2nd column with the (n-1)th column and so on…
//

#include <stdio.h>
int main()
{
    int r;
    int c;
    int a[100][100];

    scanf("%d%d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c / 2; j++)
        {
            int k = c - j - 1;

            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}