#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int userInt = 0;

    // The following code uses a do-while loop to prompt the user
    // do-while loops are useful when you want to execute the loop
    // at least once before checking the condition
    do
    {
        printf("Enter an integer (0 to quit): ");
        scanf("%d", &userInt);
        printf("You entered: %d\n", userInt);
    } while (userInt != 0);

    // The following code is equivalent to the do-while loop above
    // while loops are useful when you want to check the condition
    // before executing the loop
    while (userInt != 0)
    {
        printf("Enter an integer (0 to quit): ");
        scanf("%d", &userInt);
        printf("You entered: %d\n", userInt);
    }

    return EXIT_SUCCESS;
}
