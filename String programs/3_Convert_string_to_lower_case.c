#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];

    gets(x);

    strlwr(x);

    puts(x);

    return 0;
}