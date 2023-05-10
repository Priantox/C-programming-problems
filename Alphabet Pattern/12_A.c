#include <stdio.h>
int main()
{
    char s[] = "INDIA";
    int i;
    int j;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", s[j]);
        }

        printf("\n");
    }

    return 0;
}