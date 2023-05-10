#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    int count[26] = {0};
    int i = 0;
    int flag = -1;

    gets(x);

    while (x[i] != '\0')
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            count[x[i] - 'a']++;
        }
        else if (x[i] >= 'A' && x[i] <= 'Z')
        {
            count[x[i] - 'A']++;
        }
        else
        {
            flag = 0;
        }

        i++;
    }

    if (flag != 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                printf("%c : %d\n", i + 'a', count[i]);
            }
        }
    }
    else
    {
        printf("Error");
    }

    return 0;
}