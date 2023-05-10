#include <stdio.h>
int main()
{
    int n;
    int c = 0;

    printf("Enter rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 'A' + c);

            if (j <= i / 2)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        c = 0;
        printf("\n");
    }
    return (0);
}