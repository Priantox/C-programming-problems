#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int q = n;
    int x = 0;
    while (q != 0)
    {
        int rem = q % 10;
        x = x * 10 + rem;
        q = q / 10;
    }
    if (x == n)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}