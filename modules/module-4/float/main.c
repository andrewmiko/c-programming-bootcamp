#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float floatNumber = 3.14;
    float floatExpNumber = 1.235E13;
    double doubleExpNumber = 174.178234182734612387E2;
    double plankConstant = 6.626E-34;

    printf("Float Number 32bit: %.2f\n", floatNumber);
    printf("Float Exp Number: %e\n", floatExpNumber);
    printf("Double Exp Number: %.3E\n", doubleExpNumber);
    printf("Double Plank Constant: %.3E\n", plankConstant);

    return EXIT_SUCCESS;
}
