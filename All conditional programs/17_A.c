#include <stdio.h>

int main()
{
    int amount;
    int notes_1000;
    int notes_500;
    int notes_200;
    int notes_100;
    int notes_50;
    int notes_20;
    int notes_10;
    int notes_5;
    int notes_2;
    int notes_1;

    printf("Enter the amount: ");
    scanf("%d", &amount);
    notes_1000 = amount / 1000;
    amount = amount - (notes_1000 * 1000);
    notes_500 = amount / 500;
    amount = amount - (notes_500 * 500);
    notes_200 = amount / 200;
    amount = amount - (notes_200 * 200);
    notes_100 = amount / 100;
    amount = amount - (notes_100 * 100);
    notes_50 = amount / 50;
    amount = amount - (notes_50 * 50);
    notes_20 = amount / 20;
    amount = amount - (notes_20 * 20);
    notes_10 = amount / 10;
    amount = amount - (notes_10 * 10);
    notes_5 = amount / 5;
    amount = amount - (notes_5 * 5);
    notes_2 = amount / 2;
    amount = amount - (notes_2 * 2);
    notes_1 = amount / 1;
    amount = amount - (notes_1 * 1);

    printf("Total number of notes: \n");
    printf("1000 x %d\n", notes_1000);
    printf("500 x %d\n", notes_500);
    printf("200 x %d\n", notes_200);
    printf("100 x %d\n", notes_100);
    printf("50 x %d\n", notes_50);
    printf("20 x %d\n", notes_20);
    printf("10 x %d\n", notes_10);
    printf("5 x %d\n", notes_5);
    printf("2 x %d\n", notes_2);
    printf("1 x %d\n", notes_1);
    
    return 0;
}
