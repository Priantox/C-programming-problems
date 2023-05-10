#include <stdio.h>
void stark(char x[]);

int main()
{
    char a[1000];

    gets(a);

    stark(a);

    return 0;
}

void stark(char x[])
{
    int house;
    int k[1000] = {0};

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;

            house = (int)(x[i]);

            k[house]++;
        }
    }

    int m = 0;
    int position = 0;

    for (int i = 0; i < 128; i++)
    {
        if (k[i] > m)
        {
            m = k[i];

            position = i;
        }
    }

    printf("%c (or %c)", position, position + 32);
}