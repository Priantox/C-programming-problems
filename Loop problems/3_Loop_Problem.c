#include <stdio.h>
int main()
{
    int n;
    int i;

    printf("Enter your number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        int x = n * i;

        printf("5 X %d = %d\n", i, x);
    }

    return 0;
}
