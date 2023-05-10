#include <stdio.h>
int main()
{
    int i;
    int j;
    char ch = 'A';
    int space = 4;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = ch; j >= 'A'; j--)
        {
            printf("%c", j);
        }

        for (j = 'B'; j <= ch; j++)
        {
            printf("%c", j);
        }

        printf("\n");

        ch++;
        space--;
    }
    return 0;
}