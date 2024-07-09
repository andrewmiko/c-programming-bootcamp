#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = "Hello, World!";
    printf("The string is: %s\n", str);

    char strCopy[20];
    strcpy(strCopy, str);
    printf("The string is now: %s\n", str);

    return EXIT_SUCCESS;
}
