#include <stdio.h>
#include <stdlib.h>

void decompose(float number, int *integerPart, float *fractionalPart)
{
    *integerPart = (int)number;
    *fractionalPart = number - *integerPart;
}

int main(int argc, char const *argv[])
{
    /**
     * Decomposition of a float number to integer and fractional parts.
     * Given a float number, decompose it into integer and fractional parts.
     * For example, given 3.14, the integer part is 3 and the fractional part is 0.14.
     */

    int integerPart;
    float fractionalPart, userInput;

    printf("Enter a float number: ");
    scanf("%f", &userInput);

    decompose(userInput, &integerPart, &fractionalPart);

    printf("\n");
    printf("Number: %.2f\n", userInput);
    printf("Integer part: %d\n", integerPart);
    printf("Fractional part: %.2f\n", fractionalPart);

    return EXIT_SUCCESS;
}
