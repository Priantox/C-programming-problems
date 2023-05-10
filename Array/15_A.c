//
// WAP that will take n integers into an array A and m positive integers into array B. Now find the union (set operation) of array A and B.
//

#include <stdio.h>
int main()
{
    int n;
    int m;
    int a[100];
    int b[100];
    int c[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}