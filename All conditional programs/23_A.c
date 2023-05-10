#include <stdio.h>
int global = 10;
int fun();
int main()
{
    printf("A. Global: %d\n", global);

    int global = 20;

    printf("B. Local: %d\n", global);
    fun();
    return 0;
}
int fun()
{
    printf("C. Global: %d", global);
    return 0;
}
