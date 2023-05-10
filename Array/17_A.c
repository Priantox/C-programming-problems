//
// WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n
// must be an odd number). Then calculate sum of the integers based on following position
// pattern (consider only the boxed position during the sum). Please see the input-output.
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
            if ((j < n / 2 && i == 0) 
               || (j == n / 2) 
               || (i == n / 2 && j != n / 2) 
               || (j == n - 1 && i < n / 2) 
               || (i > n / 2 && j == 0) 
               || (i == n - 1 && j > n / 2)
               )

            {
                sum += a[i][j];
            }
        }
    }
    printf("\n");

    printf("%d", sum);

    return 0;
}