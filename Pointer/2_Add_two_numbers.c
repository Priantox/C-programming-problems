#include <stdio.h>
int add(int *, int *, int *);

int main()
{
    int a;
    int b;
    int sum;
    
    scanf("%d%d", &a, &b);

    add(&a, &b, &sum);

    printf("Sum = %d", sum);

    return 0;
}

int add(int *x, int *y, int *result)
{
    *result = *x + *y;
}
