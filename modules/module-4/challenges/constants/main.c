#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int moonLanding = 1969U;
    float speedOfLight = 299792458.0;
    float PI = 3.14;
    unsigned int hexaDead = 0xDEAD;
    unsigned int hexaSecret = 51966;

    printf("Moon Landing: %10d\n", moonLanding);
    printf("Moon Landing: %010d\n", moonLanding);

    printf("Speed of Light: %.0f\n", speedOfLight);
    printf("Speed of Light: %.3E\n", speedOfLight);

    printf("PI: %.2f\n", PI);
    printf("PI: %+.1e\n", PI);

    printf("hexa DEAD: Ox%X\n", hexaDead);
    printf("hexa DEAD: %6u\n", hexaDead);

    printf("hexa Secret: %x\n", hexaSecret);

    return EXIT_SUCCESS;
}