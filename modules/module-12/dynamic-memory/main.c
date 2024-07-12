#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Dynamic memory allocation
     *
     * malloc() - Allocates memory block of specified size and returns a pointer of type void.
     * calloc() - Allocates the memory and also initializes the allocated memory block to zero.
     * realloc() - Reallocates the memory of the specified size.
     * free() - Deallocates the memory.
     *
     * void *malloc(size_t size);
     * void *calloc(size_t num, size_t size);
     * void *realloc(void *ptr, size_t size);
     * void free(void *ptr);
     */

    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully.\n");

        for (int i = 0; i < 5; i++)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", ptr[i]);
        }

        free(ptr);
    }

    return EXIT_SUCCESS;
}
