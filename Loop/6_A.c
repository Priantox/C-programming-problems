#include <stdio.h>
int main()
{
    int a;
    int b;
    int i;
    int guess;

    scanf("%d", &a);
    scanf("%d", &b);

    for (i = b; i >= 1; i--)
    {
        scanf("%d", &guess);

        if (a == guess)
        {
            printf("Right, Player-2 wins!");
            break;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n", i - 1);

            if (i == 1)
            {
                printf("Player-1 wins");
            }
        }
    }

    return 0;
}