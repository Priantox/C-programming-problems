#include <stdio.h>
int main()
{
    unsigned int uint;
    unsigned long int ulint;
    unsigned long long int ullint;
    unsigned short int usint;
    uint = 4294967295;
    ulint = 4294967295;
    ullint = 18446744073709551615;
    usint = 65535;

    printf("The unsigned int value: %u\n", uint);
    printf("The unsigned long int value:  %u\n", ulint);
    printf("The unsigned long long int value: %u\n", ullint);
    printf("The unsigned short int value: %u\n", usint);
    printf("\n");
    uint = 0;
    ulint = 0;
    ullint = 0;
    usint = 0;

    printf("The unsigned int value: %u\n", uint);
    printf("The unsigned long int value:  %u\n", ulint);
    printf("The unsigned long long int value: %u\n", ullint);
    printf("The unsigned short int value: %u", usint);
    return 0;
}
