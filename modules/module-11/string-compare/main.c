#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[] = "Hello, World!";
    char str2[] = "Hell0, World!";

    int result;
    result = strcmp(str1, str2);
    printf("The result of comparing \"%s\" and \"%s\" is %d\n", str1, str2, result);

    return EXIT_SUCCESS;
}
