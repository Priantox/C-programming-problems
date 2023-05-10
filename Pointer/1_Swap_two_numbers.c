#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a;
    int b;
    
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a = %d & b = %d", a, b);

    return 0;
}

int swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}