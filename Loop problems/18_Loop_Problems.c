#include <stdio.h>
int main()
{
    int n;
    int i;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not prime number");
            break;
        }
        else
        {
            printf("Prime number");
            break;
        }
    }

    return 0;
}