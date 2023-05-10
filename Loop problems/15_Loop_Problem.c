#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int q = n;
    int count = 0;

    while (q != 0)
    {
        count++;
        q = q / 10;
    }

    int cnt = count;
    int rem;
    q = n;
    int f = 1;
    int x = 0;
    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            f = f * rem;
            cnt--;
        }
        x = x + f;
        q = q / 10;
        cnt = count;
        f = 1;
    }
    if (x == n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }

    return 0;
}