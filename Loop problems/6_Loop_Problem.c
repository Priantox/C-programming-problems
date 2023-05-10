#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}