#include <stdio.h>
void length(char *);

int main()
{
    char x[100];

    gets(x);

    length(&x[0]);

    return 0;
}

void length(char *x)
{

    int c = 0;
    while (*x != '\0')
    {
        c++;

        x++;
    }

    printf("%d", c);
}