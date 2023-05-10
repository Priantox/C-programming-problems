#include <stdio.h>
int main()
{
    int a = 20;
    int *p;
    p = &a;

    printf("Before changing - value of a: %d", a);

    *p = 40;

    printf("\nAfter  changing - value of a: %d", a);
    printf("\nValue has changed.");

    return 0;
}