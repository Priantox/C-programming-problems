//
// WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.
//

#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int b[100];
    int f = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k;

    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            b[f] = i;
            f++;
        }
    }
    if (f != 0)
    {
        printf("FOUND at index position: ");

        for (int i = 0; i < f; i++)
        {
            printf("%d", b[i]);

            if (i != f - 1)
            {
                printf(", ");
            }
        }
    }
    else
    {
        printf("NOT FOUND");
    }

    return 0;
}