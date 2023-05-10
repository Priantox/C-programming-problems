#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct player
{
    char name[100];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];
} PLAYER;
int main()
{
    PLAYER list[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter Player %d's name:\n", i + 1);
        gets(list[i].name);
        printf("Enter Player %d's Country:\n", i + 1);
        gets(list[i].country);
        printf("Enter the score of 3 matches:\n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &list[i].runs[j]);
        }
        printf("Enter the wickets of 3 matches:\n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &list[i].wickets[j]);
        }
        getchar();
        for (int j = 0; j < 3; j++)
        {
            int runPoints;
            if (list[i].runs[j] <= 25)
            {
                runPoints = 5;
            }
            else if (list[i].runs[j] > 25 && list[i].runs[j] <= 50)
            {
                runPoints = 10;
            }
            else if (list[i].runs[j] > 50 && list[i].runs[j] <= 75)
            {
                runPoints = 15;
            }
            else
            {
                runPoints = 20;
            }
            int wicketPoints = list[i].wickets[j] * 12;
            list[i].points[j] = runPoints + wicketPoints;
        }
    }

    system("cls||clear");

    for (int i = 0; i < 3; i++)
    {
        printf("Match %d\n", i + 1);
        printf("---------\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%s : %d\n", list[j].name, list[j].points[i]);
        }
        printf("\n");
    }
    printf("\nPress any key to exit...\n");
    getch();
    printf("\nExiting...\n\n");

    return 0;
}