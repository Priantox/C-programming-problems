//
// Function to determine only even numbers in an array of input integers.
//

#include <stdio.h>
void stark(int x[], int);

int main()
{
    int a[100];
    char c;
    int i;

    for (i = 0; c != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &c);
    }

    stark(a, i);

    return 0;
}

void stark(int x[], int k)
{
    int b[100];
    int l = 0;

    for (int i = 0; i < k; i++)
    {
        if (x[i] % 2 == 0)
        {
            b[l] = x[i];

            l++;
        }
    }

    printf("\n");

    for (int i = 0; i < l; i++)
    {
        printf("%d ", b[i]);
    }
}
