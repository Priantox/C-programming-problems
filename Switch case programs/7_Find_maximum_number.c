#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter two numbers to find maximum number: ");
    scanf("%d%d", &a, &b);

    switch (a > b)
    {
    case 0:
        printf("%d is Maximum number", b);
        break;
    case 1:
        printf("%d is Maximum number", a);
        break;
    }
    return 0;
}