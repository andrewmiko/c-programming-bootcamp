#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int numberOfStudents = 25U;
    unsigned long int worldPopulation = 8118904030U;

    printf("Students in the class: %u\n", numberOfStudents);
    printf("Word polulation: %lu\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("Current UINT8 max: %u\n", count);
    count = count + 1;
    printf("Overflow UINT8 max: %u\n", count);

    printf("UINT8 MAX: %u\n", UINT8_MAX);
    printf("UINT16 MAX: %u\n", UINT16_MAX);
    printf("UINT32 MAX: %u\n", UINT32_MAX);

    return EXIT_SUCCESS;
}
