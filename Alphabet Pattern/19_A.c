#include <stdio.h>
int main()
{
    int i;
    int j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }
    
    return 0;
}