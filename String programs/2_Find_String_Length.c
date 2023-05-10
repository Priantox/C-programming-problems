#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    int k;

    gets(x);

    k = strlen(x);

    printf("%d", k);

    return 0;
}