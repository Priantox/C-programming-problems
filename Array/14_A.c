//
// WAP that will take n integers into an array A and m positive integers into array B. Now find the intersection (set operation) of array A and B.
//

#include <stdio.h>
int main()
{
    int a[100];
    int b[100];
    int x;
    int y;
    int flag = 0;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("Empty set");
    }

    return 0;
}