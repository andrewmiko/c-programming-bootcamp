#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int userInput, result;

    while (userInput != -1)
    {
        printf("Enter a number: ");
        scanf("%u", &userInput);

        if (userInput > 0)
        {
            result = 1;
            while (result < userInput)
            {
                result *= 2;
            }
            printf("The minimum power of 2 greater than or equal to %u is %u\n", userInput, result);
        }
    }

    printf("Goodbye!\n");

    return EXIT_SUCCESS;
}
