//
// Function that finds and returns the minimum value in an array
//

#include <stdio.h>
int stark(int x[], int);

int main()
{
    int a[100];
    int i;
    char ch;

    for (int i = 0; ch != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);
    }

    int k = stark(a, i);

    printf("\n");

    printf("Minimum Value: %d", k);

    return 0;
}

int stark(int x[], int l)
{
    int min = x[0];

    for (int i = 1; i < l; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }

    return min;
}