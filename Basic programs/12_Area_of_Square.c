#include <stdio.h>
int main()
{
    int a;

    printf("Enter side: ");
    scanf("%d", &a);

    int A = a * a;

    printf("Area of square is %d", A);

    return 0;
}