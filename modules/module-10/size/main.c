#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Size of an array
     *
     * The size of an array is the number of elements it can hold.
     *
     * Getting size:
     * - sizeof(array) returns the size of the array in bytes.
     * - sizeof(array) / sizeof(array[0]) returns the number of elements in the array.
     */

    int listLength = 5;
    int numbers[listLength];

    printf("Size of numbers: %lu\n", sizeof(numbers));
    printf("Number of elements in numbers: %lu\n", sizeof(numbers) / sizeof(numbers[0]));

    return EXIT_SUCCESS;
}
