#include <stdio.h>
int main()
{
    int n;
    int a[10000];
    int i;
    int k[1000];

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        k[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k[j] = 0;
                count++;
            }
        }
        if (k[i] != 0)
        {
            k[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");

    for (int i = 0; i < n; i++)
    {
        if (k[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], k[i]);
        }
    }

    return 0;
}