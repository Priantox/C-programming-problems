//
// WAP that will take n integers into an array A. Now remove all duplicates numbers from that array. Finally print all elements from that array. 
//

#include <stdio.h>
int main()
{
    int n;
    int a[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }

        printf("%d ", a[i]);
    }

    return 0;
}