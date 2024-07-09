#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /**
     * String Copy
     *
     * - The strcpy() function copies the string pointed to by the source to the destination.
     * - The function returns the destination string.
     * - The destination string must be large enough to hold the source string.
     * - The function does not check for overflow.
     * - The function does not append a null character to the destination string.
     * - The function does not return a value.
     */

    char str[] = "Hello, World!";
    printf("The string is: %s\n", str);

    char strCopy[20];
    strcpy(strCopy, str);
    printf("The string is now: %s\n", str);

    return EXIT_SUCCESS;
}
