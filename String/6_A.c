#include <stdio.h>
void stark(char a[]);

int main()
{
    char x[100];

    gets(x);

    stark(x);

    return 0;
}

void stark(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] > 'a' && a[i] < 'z')
        {
            a[i] = a[i] - 32;
        }
    }

    puts(a);
}