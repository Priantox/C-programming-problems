#include <stdio.h>
int main()
{
    int i;
    int j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%c", 'A' - 1 + j);
        }
        
        printf("\n");
    }
    return 0;
}