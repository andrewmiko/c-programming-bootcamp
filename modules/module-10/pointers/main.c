#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Arrays and Pointers
     *
     * An array name is a constant pointer to the first element of the array.
     *
     * Example:
     * int numbers[5] = {1, 2, 3, 4, 5};
     * int *p = numbers;
     */

    int x[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("x[i]: %d\n", x[i]);
    }

    int *p = &x[2];
    printf("Accessing x[2] using a pointer\n");
    printf("x[2]: %d\n", x[2]);
    printf("*p: %d\n", *p);

    *p = 0;
    printf("Changing the value of x[2] to 0\n");
    printf("x[2]: %d\n", x[2]);
    printf("*p: %d\n", *p);

    return EXIT_SUCCESS;
}
