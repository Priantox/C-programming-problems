#include <stdio.h>
int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int q = n;
    int x = 0;

    while (q != 0)
    {
        x = x * 10 + (q % 10);
        q = q / 10;
    }
    q = n;
    while (x != 0)
    {
        switch (x % 10)
        {
        case 1:
            printf("One ");
            break;

        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five ");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;
        }
        x = x / 10;
    }

    return 0;
}