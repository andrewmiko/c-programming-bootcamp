#include <stdio.h>
#include <stdlib.h>

int calculateBitSelector(unsigned data, unsigned N, unsigned M)
{
    unsigned W = M - N + 1;
    unsigned bitmask = (1 << W) - 1;
    unsigned result = (data >> N) & bitmask;

    return result;
}

int main(int argc, char const *argv[])
{

    /**
     * Bit Selector
     * Data: 0x0000ABCD
     * Result: 0x0000000C
     *
     * Calculate the result of the bit selector with the given data and range:
     * - [0:3]
     * - [4:7]
     * - [8:11]
     * - [12:15]
     */

    unsigned data = 0xABCD;
    unsigned result;

    /**
     * 0b1111 = 15 = 2^4 - 1
     * 0b0111 =  7 = 2^3 - 1
     * 0b0011 =  3 = 2^2 - 1
     * 0b0001 =  1 = 2^1 - 1
     *
     * W: width of the bitmask in bits
     * bitmask = 2^W - 1
     *
     * [0:1] -> W = 2 -> bitmask = 0b11
     * [0:2] -> W = 3 -> bitmask = 0b111
     * [0:3] -> W = 4 -> bitmask = 0b1111
     *
     * 2^W = 1 << W
     * bitmask = 2^W - 1 = (1 << W) - 1
     */

    printf("Bit Selector\n");
    printf("Data: 0x%08X\n", data);

    result = calculateBitSelector(data, 0, 3);
    printf("Result [0:3]: 0x%08X\n", result);

    result = calculateBitSelector(data, 4, 7);
    printf("Result [4:7]: 0x%08X\n", result);

    result = calculateBitSelector(data, 8, 11);
    printf("Result [8:11]: 0x%08X\n", result);

    result = calculateBitSelector(data, 12, 15);
    printf("Result [12:15]: 0x%08X\n", result);

    return EXIT_SUCCESS;
}
