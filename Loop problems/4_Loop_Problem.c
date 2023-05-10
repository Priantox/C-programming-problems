#include <stdio.h>
int main()
{
    int n;
    int i;

    printf("Enter your number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
