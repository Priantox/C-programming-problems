//
// WAP that will take the size of an identity matrix from the user and generate the identity
// matrix into a 2D array. Finally display it. 
//

#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}