//
// WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.
// 

#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    int i;
    int j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        j = n - i - 1;
        int k = a[i];
        a[i] = a[j];
        a[j] = k;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}