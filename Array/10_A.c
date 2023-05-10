//
// WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array A and B. 
// Finally show all elements of both array A and B.
//

#include <stdio.h>
int main()
{
    int n;
    int m;
    int a[100];
    int b[100];
    int temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int max = n > m ? n : m;

    for (int i = 0; i < max; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("Array A : ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("Array B : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}