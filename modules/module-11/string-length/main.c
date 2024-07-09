#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * String Length
     *
     * - The sizeof() function returns the size of the string including the null terminator.
     * - The null terminator is a special character '\0' that marks the end of the string.
     * - The null terminator is not included in the length of the string.
     */

    char str[] = "Hello, World!";

    // Size -1 because the size of the string includes the null terminator
    printf("The length of the string \"%s\" is %ld\n", str, sizeof(str) - 1);

    // Print each character of the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }

    return EXIT_SUCCESS;
}
