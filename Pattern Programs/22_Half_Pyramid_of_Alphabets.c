#include <stdio.h>
int main()
{
    char n;
    char alpha = 'A';

    printf("Enter alphabet: ");
    scanf("%c", &n);

    for (int i = 1; i <= (n - 'A' + 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c", alpha);
        }
        alpha++;
        printf("\n");
    }
    return 0;
}