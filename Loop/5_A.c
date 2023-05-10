#include <stdio.h>
int main()
{
    int x;
    int y;
    int n;

    printf("Enter two integar: ");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        for (int i = x; i >= y; i--)
        {

            if (i == y)
            {
                printf("Reached!");
                break;
            }

            n = i * i;

            printf("%d ", n);
        }
    }
    else if (x < y)
    {

        for (int i = x; i <= y; i++)
        {

            if (i == y)
            {
                printf("Reached!");
                break;
            }

            n = i * i;

            printf("%d ", n);
        }
    }
    else
    {
        printf("Reached!");
    }

    return 0;
}