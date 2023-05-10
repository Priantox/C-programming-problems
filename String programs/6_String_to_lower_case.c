#include <stdio.h>
#include <ctype.h>
int main()
{
    char x[100];

    gets(x);

    int i = 0;

    while (x[i] != '\0')
    {
        x[i] = tolower(x[i]);

        i++;
    }

    puts(x);

    return 0;
}