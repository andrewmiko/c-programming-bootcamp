#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char upperA = 'A';
    char lowerA = 'a';

    printf("A in Char: %c\n", upperA);
    printf("A in Decimal: %d, a: %d\n", upperA, lowerA);
    printf("A in Octal: %o\n", upperA);
    printf("A in Hex: %X\n", upperA);

    return EXIT_SUCCESS;
}