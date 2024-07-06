#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Arrays
     *
     * An array is a collection of elements of the same type stored in a contiguous memory location.
     *
     * Initializing an array:
     * - int numbers[5]; // uninitialized array - random values
     * - int numbers[] = {1, 2, 3, 4, 5};
     * - int numbers[5] = {1, 2, 3, 4, 5};
     * - int numbers[5] = {1, 2, 3}; // {1, 2, 3, 0, 0}
     * - int numbers[5] = {0}; // all elements are initialized to 0
     * - int numbers[5] = {[1] = 10, [3] = 20}; // {0, 10, 0, 20, 0} // sparse array
     */

    int listLength = 5;
    int numbers[listLength];

    for (int i = 0; i < listLength; i++)
    {
        printf("%d", numbers[i]);
    }

    return EXIT_SUCCESS;
}
