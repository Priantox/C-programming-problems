//
// WAP that will take n integer numbers into an array, and then sum up all the integers in that array.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int i;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}