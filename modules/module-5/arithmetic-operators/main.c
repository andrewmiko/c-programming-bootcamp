#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numA, numB, result;

    printf("Enter the first number: ");
    scanf("%d", &numA);

    printf("Enter the second number: ");
    scanf("%d", &numB);

    result = numA + numB;
    printf("The sum of %d and %d is %d\n", numA, numB, result);

    result = numA - numB;
    printf("The difference of %d and %d is %d\n", numA, numB, result);

    result = numA * numB;
    printf("The product of %d and %d is %d\n", numA, numB, result);

    result = numA / numB;
    printf("The division of %d and %d is %d\n", numA, numB, result);

    result = numA % numB;
    printf("The remainder of %d and %d is %d\n", numA, numB, result);

    return EXIT_SUCCESS;
}
