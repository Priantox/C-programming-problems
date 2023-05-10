#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int ar1[1000];
    int ar2[1000];
    int kk[1000];
    int i;

    printf("Enter the size of first array : ");
    scanf("%d", &n1);

    printf("Enter elements in first array : ");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &ar1[i]);
    }

    printf("Enter the size of second array : ");
    scanf("%d", &n2);

    printf("Enter elements in second array : ");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int x = n1 + n2;

    int a1 = 0;
    int a2 = 0;

    for (int i = 0; i < x; i++)
    {
        if (a1 >= n1 || a2 >= n2)
        {
            break;
        }

        if (ar1[a1] < ar2[a2])
        {
            kk[i] = ar1[a1];
            a1++;
        }
        else
        {
            kk[i] = ar2[a2];
            a2++;
        }
    }

    while (a1 < n1)
    {
        kk[i] = ar1[a1];
        i++;
        a1++;
    }
    while (a2 < n2)
    {
        kk[i] = ar2[a2];
        i++;
        a2++;
    }

    printf("\nArray merged in ascending order : ");
    for (i = 0; i < x; i++)
    {
        printf("%d ", kk[i]);
    }

    return 0;
}