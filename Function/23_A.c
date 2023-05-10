//
// Function find_substr( ) that takes two string arrays (a, b) as parameters, uses function
// str_length() to determine the lengths of the strings, and then looks for the smaller string
// anywhere in the bigger string. It returns 1 if the substring is found, or returns –1 if no match
// is found. 
//

#include <stdio.h>

int str_length(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int find_substr(char *a, char *b)
{
    int len_a = str_length(a);
    int len_b = str_length(b);

    if (len_a < len_b)
    {
        char *temp = a;
        a = b;
        b = temp;
        len_a = len_b;
        len_b = str_length(b);
    }

    int i, j;
    for (i = 0; i <= len_a - len_b; i++)
    {
        for (j = 0; j < len_b; j++)
        {
            if (a[i + j] != b[j])
            {
                break;
            }
        }
        if (j == len_b)
        {
            return 1;
        }
    }

    return -1;
}

int main()
{
    char a[100];
    char b[100];

    gets(a);
    gets(b);

    int result = find_substr(a, b);
    printf("%d\n", result);
    return 0;
}
