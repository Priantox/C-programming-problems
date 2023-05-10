#include <stdio.h>
void stark(char *, char *);

int main()
{
    char x[100];
    char y[100];

    gets(x);

    stark(&x[0], &y[0]);

    return 0;
}

void stark(char *x, char *y)
{
    while (*x != '\0')
    {
        *y = *x;

        x++;
        y++;
    }
    *y = '\0';

    puts(y);

}