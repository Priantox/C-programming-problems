#include <stdio.h>
int main()
{
    int i;
    int n;
    int j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", (char)(j + 64));
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }

    return 0;
}