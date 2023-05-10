#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter any three number: ");
    scanf("%d%d%d", &a, &b, &c);

    int x = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf("The largest number is %d", x);

    return 0;
}