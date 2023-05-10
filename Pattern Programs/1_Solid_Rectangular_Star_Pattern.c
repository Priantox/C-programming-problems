#include <stdio.h>
int main()
{
    int r;
    int c;

    printf("Enter row: ");
    scanf("%d", &r);
    printf("Enter columms: ");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}