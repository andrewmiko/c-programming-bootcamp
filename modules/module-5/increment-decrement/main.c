#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int a, b;

    a = 0;
    b = a++; // post increment = assign first then increment
    printf("After post increment a = %d, b = %d\n", a, b);

    a = 0;
    b = ++a; // pre increment = increment first then assign
    printf("After pre increment a = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}
