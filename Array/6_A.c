//
// WAP that will take n integer numbers into an array, and then find the maximum - minimum among them with its index position.
//

#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    int i;
    int k1;
    int k2;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            k1 = i;
        }

        if (a[i] < min)
        {
            min = a[i];
            k2 = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, k1);
    printf("Min: %d, Index: %d", min, k2);

    return 0;
}