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
    int l = 0;

    while (x[l] != '\0')
    {
        l++;
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (x[i] == x[j])
            {
                for (int k = j; k < l; k++)
                {
                    x[k] = x[k + 1];
                }
                l--;
                j--;
            }
        }
    }

    puts(x);
}