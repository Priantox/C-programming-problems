#include <stdio.h>
int main()
{
    char i;
    char j;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }

    return 0;
}