//
// WAP that will take n integers into a sqrt(n) by sqrt(n) array (2D) and show them as
// traditional matrix view.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int a[100];
    int b[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k = sqrt(n);
    int x = 0;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            b[i][j] = a[x];
            x++;
        }
    }
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    return 0;
}