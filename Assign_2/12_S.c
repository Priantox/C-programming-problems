#include <stdio.h>
int word(char x[], char r[]);

int main()
{
    char a[100];
    char r[100];

    gets(a);
    gets(r);

    int count = word(a, r);

    printf("%d", count);

    return 0;
}

int word(char x[], char r[])
{
    int i = 0;
    int flag;
    int c = 0;
    while (x[i] != '\0')
    {
        if (x[i] == r[0])
        {
            flag = -1;
            for (int j = 1; r[j] != '\0'; j++)
            {
                if (x[i + j] != r[j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag != 0)
            {
                c++;
            }
        }

        i++;
    }

    return c;
}