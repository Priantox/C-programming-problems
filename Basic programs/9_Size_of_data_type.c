#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int: %d\nSize of float: %d\nSize of double: %d\nSize of char: %d", sizeof(i), sizeof(f), sizeof(d), sizeof('c'));

    return 0;
}