#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
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
