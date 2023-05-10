//
// Add two integar
//

#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter two integar: ");
    scanf("%d%d", &a, &b);

    int x = a + b;

    printf("Sum of two integar: %d", x);

    return 0;
}