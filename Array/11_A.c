//
// WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A.
// Finally show all elements of array A.
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
        if (a[i] % 3 == 0)
        {
            a[i] = -1;
        }

        printf("%d ", a[i]);
    }
    
    return 0;
}