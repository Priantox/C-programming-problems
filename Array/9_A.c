//
// WAP that will take n integers into an array A, and then copy all numbers in reverse order from array A to another array B.
// Finally show all elements of both array A and B.
//

#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;
    int j;
    int k;

    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        j = n - i - 1;
        k = a[i];
        a[i] = a[j];
        a[j] = k;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}