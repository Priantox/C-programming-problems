#include <stdio.h>
int main()
{
    char i;
    char j;
    
    for (i = 'E'; i >= 'A'; i--)
    {
        for (j = 'E'; j >= 'A'; j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}