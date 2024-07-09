#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /**
     * String Compare
     *
     * - The strcmp() function compares two strings and returns an integer value.
     * - The function returns 0 if the two strings are equal.
     * - The function returns a positive value if the first string is greater than the second string.
     * - The function returns a negative value if the first string is less than the second string.
     */

    char str1[] = "Hello, World!";
    char str2[] = "Hell0, World!";

    int result;
    result = strcmp(str1, str2);
    printf("The result of comparing \"%s\" and \"%s\" is %d\n", str1, str2, result);

    result = strcmp(str2, str1);
    printf("The result of comparing \"%s\" and \"%s\" is %d\n", str2, str1, result);

    return EXIT_SUCCESS;
}
