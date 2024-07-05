#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Bitwise Operators - boolean operatations on each bit of the number
    // Logical Operators - boolean operations on the whole number

    unsigned int a = 5;
    unsigned int b = 3;

    printf("Bitwise Operators\n");

    // Table:
    // 1 & 1 = 1
    // 1 & 0 = 0
    // 0 & 1 = 0
    // 0 & 0 = 0

    // Example: 5 & 3 = 1 (& = AND)
    // 5 = 101
    // 3 = 011
    // 1 = 001
    printf("Bitwise AND\n");
    printf("5 & 3 = %d\n", a & b);

    // Table:
    // 1 | 1 = 1
    // 1 | 0 = 1
    // 0 | 1 = 1
    // 0 | 0 = 0

    // Example: 5 | 3 = 7 (| = OR)
    // 5 = 101
    // 3 = 011
    // 7 = 111
    printf("Bitwise OR\n");
    printf("5 | 3 = %d\n", a | b);

    // Table:
    // 1 ^ 1 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1
    // 0 ^ 0 = 0

    // Example: 5 ^ 3 = 6 (^ = XOR)
    // 5 = 101
    // 3 = 011
    // 6 = 110
    printf("Bitwise XOR\n");
    printf("5 ^ 3 = %d\n", a ^ b);

    // Table:
    // ~1 = 0
    // ~0 = 1

    // Example: ~5 = -6 (~ = NOT)
    // 5 = 101
    // 6 = 110
    printf("Bitwise NOT\n");
    printf("~5 = %d\n", ~a);

    // Table:
    // 11001100 >> 2 = [00]110011
    // 11001100 >> 3 = [000]11001

    // Example: 5 >> 1 = 2 (>> = Right Shift)
    // 5 = 101
    // 2 = 10
    printf("5 >> 1 = %d\n", a >> 1);

    // Table:
    // 11001100 << 2 = 001100[00]
    // 11001100 << 3 = 11000[000]

    // Example: 5 << 1 = 10 (<< = Left Shift)
    // 5 = 101
    // 10 = 1010
    printf("Bitwise Left Shift\n");
    printf("5 << 1 = %d\n", a << 1);

    return EXIT_SUCCESS;
}
