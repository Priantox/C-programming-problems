//
// Function that multiplies the array elements by 2 and returns the array
//

#include <stdio.h>
void func(int *, int);

int main()
{
    int a[100];
    int i;
    char ch;

    for (i = 0; ch != '\n'; i++)
    
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);
    }

    func(a, i);

    printf("\n\n");

    for (int j = 0; j < i; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}

void func(int *x, int l)
{
    for (int i = 0; i < l; i++)
    {
        *(x + i) = *(x + i) * 2;
    }
}