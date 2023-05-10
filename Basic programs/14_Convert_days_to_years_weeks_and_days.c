#include <stdio.h>
int main()
{
    int days;
    int years;
    int weeks;

    printf("Enter your days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;

    printf("Year: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);

    return 0;
}