//
// Swap value
//

#include <stdio.h>
int main()
{
    int x1;
    int x2;

    printf("Enter value 1: ");
    scanf("%d", &x1);

    printf("Enter value 2: ");
    scanf("%d", &x2);

    int f = x1;
    x1 = x2;
    x2 = f;

    printf("Value 1; %d\n", x1);
    printf("Value 2: %d", x2);

    return 0;
}