#include <stdio.h >
int main()
{
    int i;
    int j;

    for (i = 1; i <= 9; i += 2)
    {
        for (j = i; j <= 9; j += 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}