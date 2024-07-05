#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Conditional statements
    int a = 10;

    if (a > 5)
    {
        printf("a is greater than 5\n");
    }
    else
    {
        printf("a is less than or equal to 5\n");
    }

    // Nested if-else
    int b = 20;

    if (b > 10)
    {
        if (b > 15)
        {
            printf("b is greater than 15\n");
        }
        else
        {
            printf("b is less than or equal to 15\n");
        }
    }
    else if (b == 10)
    {
        printf("b is equal to 10\n");
    }
    else
    {
        printf("b is less than or equal to 10\n");
    }

    return EXIT_SUCCESS;
}
