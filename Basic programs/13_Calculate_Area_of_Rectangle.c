#include <stdio.h>
int main()
{
    int l;
    int b;

    printf("Enter lenth of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of ractangle: ");
    scanf("%d", &b);

    int A = l * b;

    printf("Area of rectangle: %d", A);

    return 0;
}