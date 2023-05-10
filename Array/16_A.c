//
// WAP that will take n integers into an array A and m positive integers into array B. Now find the difference (set operation) of array A and B or (A-B).
//

#include <stdio.h>
int main()
{
    int n;
    int m;
    int a[100];
    int b[100];

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
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int flag = 0;

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}