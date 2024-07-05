#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    if (number < 0)
    {
        printf("Please enter a positive number\n");
        return EXIT_FAILURE;
    }

    if (number % 2 == 0)
    {
        printf("%d is an even number\n", number);
    }
    else
    {
        printf("%d is an odd number\n", number);
    }

    return EXIT_SUCCESS;
}
