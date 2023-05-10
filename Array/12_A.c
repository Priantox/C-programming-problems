//
// WAP that will take n integers into an array A. Now sort them in ascending order within that array. Finally show all elements of array A.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int k[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                int k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }

        printf("%d ", a[i]);
    }

    return 0;
}