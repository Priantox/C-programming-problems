#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int e[100];
    int o[100];
    int k = 0;
    int l = 0;

    printf("Enter the size of number: ");
    scanf("%d", &n);

    printf("Input the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e[k] = a[i];
            k++;
        }
        else
        {
            o[l] = a[i];
            l++;
        }
    }

    printf("The even elements are ");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", e[i]);
    }

    printf("\nThe odd elements are ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", o[i]);
    }

    return 0;
}