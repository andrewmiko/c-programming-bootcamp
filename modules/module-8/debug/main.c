#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Code example for debbuging purposes
     * This code is used to show how to debug a program
     * In this code there are some errors that need to be fixed
     */

    int a = 10;
    int b = 20;
    int c = 0;

    // Division by zero
    c = a / 0;
    printf("Division by zero: %d\n", c);

    // Uninitialized variable
    int d;
    printf("Uninitialized variable: %d\n", d);

    return EXIT_SUCCESS;
}
