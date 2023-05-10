#include <stdio.h>
void stark(char x[]);

int main()
{
    char a[100];

    gets(a);

    stark(a);

    return 0;
}

void stark(char x[])
{
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;
        }

        else if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] + 32;
        }
    }

    puts(x);
}