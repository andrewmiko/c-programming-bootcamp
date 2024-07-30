#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{
    /**
     * Macros are a way to define constants or functions that can be used in your code.
     * They are defined using the #define directive.
     *
     * Example:
     * #define PI 3.14159
     *
     * Macros can also be used to define functions.
     *
     * Example:
     * #define SQUARE(x) x * x
     *
     * List of predefined macros:
     * https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html
     *
     */

    printf("The value of PI is: %f\n", PI);

    return EXIT_SUCCESS;
}
