#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char x[100];
    int r[100];

    gets(x);

    int j = 0;
    int k = 0;

    while (x[k] != '\0')
    {
        k++;
    }

    for (int i = k - 1; i >= 0; i--)
    {
        r[j] = x[i];

        j++;
    }

    r[j] = '\0';

    puts(r);

    return 0;
}