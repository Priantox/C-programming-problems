//
//
// Program that will take three integer numbers from keyboard but assign only the first andlast inputs to variables and skip any assignment of the middle one.
//
//
#include <stdio.h>
int main()
{
    int first;
    int last;
    int middle;

    printf("Enter three integer numbers: ");
    scanf("%d %*d %d", &first, &last);

    printf("First number: %d\n", first);
    printf("Last number: %d\n", last);

    return 0;
}