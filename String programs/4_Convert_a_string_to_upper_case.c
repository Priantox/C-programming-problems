#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];

    gets(x);

    strupr(x);

    puts(x);

    return 0;
}