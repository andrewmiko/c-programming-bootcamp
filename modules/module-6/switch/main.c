#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char operator;
    double numberA, numberB, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &numberA);

    printf("Enter second number: ");
    scanf("%lf", &numberB);

    switch (operator)
    {
    case '+':
        result = numberA + numberB;
        break;
    case '-':
        result = numberA - numberB;
        break;
    case '*':
        result = numberA * numberB;
        break;
    case '/':
        result = numberA / numberB;
        break;
    case '%':
        result = (int)numberA % (int)numberB;
        break;
    default:
        printf("Invalid operator\n");
        return EXIT_FAILURE;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", numberA, operator, numberB, result);

    return EXIT_SUCCESS;
}
