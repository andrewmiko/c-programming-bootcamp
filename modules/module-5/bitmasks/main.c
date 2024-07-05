#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Bitmasks Table:
    // Operator | Bitmask   | Description | Example
    // ---------|-----------|-------------|--------
    // &        | Clearing  | Bitwise AND | Mask is 0 -> result is 0
    // &        | Testing   | Bitwise AND | Mask is 1 -> input passed
    // |        | Setting   | Bitwise OR  | Mask is 1 -> result is 1
    // ^        | Toggling  | Bitwise XOR | Mask is 1 -> input toggled

    // Bitmasks are used to manipulate bits in a byte.
    // Bitmask A = 0b0001

    // -------------------------
    // Clearing:
    // 0b0101 & 0b0001 = 0b0001
    // 0b0100 & 0b0001 = 0b0000

    // Example =>
    // Clearing Nth bit: mask = input & ~(1 << N)
    // d = 0b10101010
    // m = 0b11011111
    // r = 0b10001010
    // -------------------------

    // -------------------------
    // Testing:
    // 0b0101 & 0b0001 = 0b0001 ( != 0)
    // 0b0100 & 0b0001 = 0b0000 ( == 0)

    // Example =>
    // Testing Nth bit: mask = input & (1 << N)
    // d = 0b10101010
    // m = 0b00010000
    // r = 0b00000000 (false)
    // -------------------------

    // -------------------------
    // Setting:
    // 0b0101 | 0b0001 = 0b0101
    // 0b0100 | 0b0001 = 0b0101

    // Example =>
    // Setting Nth bit: mask = input | (1 << N)
    // d = 0b10101010
    // m = 0b01110000
    // r = 0b11111010
    // -------------------------

    // -------------------------
    // Toggling:
    // 0b0101 ^ 0b0001 = 0b0100
    // 0b0100 ^ 0b0001 = 0b0101

    // Example =>
    // Toggling Nth bit: mask = input ^ (1 << N)
    // d = 0b10101010
    // m = 0b00010000
    // r = 0b10011010
    // -------------------------

    printf("Bitmasks\n");

    unsigned char bitmask = (1 << 0); // 0b00000001
    unsigned char input_1 = 0b00000101;
    unsigned char input_2 = 0b00000100;

    // Clearing
    printf("Clearing: %d\n", input_1 & bitmask);
    printf("Clearing: %d\n", input_2 & bitmask);

    // Testing
    printf("Testing: %d\n", input_1 & bitmask);
    printf("Testing: %d\n", input_2 & bitmask);

    // Setting
    printf("Setting: %d\n", input_1 | bitmask);
    printf("Setting: %d\n", input_2 | bitmask);

    // Toggling
    printf("Toggling: %d\n", input_1 ^ bitmask);
    printf("Toggling: %d\n", input_2 ^ bitmask);

    return EXIT_SUCCESS;
}
