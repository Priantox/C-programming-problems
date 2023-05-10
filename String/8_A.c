#include <stdio.h>
#include <string.h>
void jarvis(char x[]);

int main()
{
    char a[100];

    gets(a);

    jarvis(a);

    return 0;
}

void jarvis(char x[])
{
    int l = strlen(x);

    for (int i = 1; i < l; i++)
    {
        for (int j = 0; j < l - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }

    puts(x);
}