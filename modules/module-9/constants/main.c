#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /**
     * Constant pointers:
     * A constant pointer is a pointer that cannot be changed to point to another memory location.
     * int *const p = &x;
     *
     * Pointers to constants:
     * A pointer to a constant is a pointer that can be changed to point to another memory location, but the value at the memory location cannot be changed.
     * const int *p = &x;
     *
     * Everything is constant:
     * A constant pointer to a constant is a pointer that cannot be changed to point to another memory location, and the value at the memory location cannot be changed.
     * const int *const p = &x;
     */

    int x = 10;
    int y = 20;
    int z = 30;

    int *const p1 = &x;
    // Error: assignment of read-only variable 'p1'
    // p1 = &y;
    printf("p1 = %p | %d\n", p1, *p1);

    const int *p2 = &y;
    // Error: assignment of read-only location '*p2'
    // *p2 = 40;
    printf("p2 = %p | %d\n", p2, *p2);

    const int *const p3 = &z;
    // Error: assignment of read-only variable 'p3'
    // p3 = &x;
    printf("p3 = %p | %d\n", p3, *p3);

    return EXIT_SUCCESS;
}
