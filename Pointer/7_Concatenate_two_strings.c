#include <stdio.h>
void stark(char *, char *);

int main()
{
    char a[100];
    char b[100];

    gets(a);
    gets(b);

    stark(a, b);

    return 0;
}

void stark(char *x, char *y)
{
    int i = 0;
    int j = 0;

    while (*(x + j) != '\0')
    {
        j++;
    }

    while (*(y + i) != '\0')
    {
        *(x + j) = *(y + i);

        i++;
        j++;
    }
    *(x + j) = '\0';

    puts(x);
}