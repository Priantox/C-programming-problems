#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    char r[100];

    gets(x);
    gets(r);

    int f = strcmp(x, r);

    if (f == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}