#include <stdio.h>
int main()
{
    int n;
    int a[1000];

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the number of elements: ");

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
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}