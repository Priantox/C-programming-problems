#include <stdio.h>
int main()
{
    int i = 1;
    char n;

    while (1)
    {
        scanf("%c", &n);
        getchar();
        if (n == 'A')
        {
            break;
        }
        else
        {
            printf("Input %d: %c\n", i, n);
        }
        i++;
    }

    return 0;
}