#include <stdio.h>
#include <stdlib.h>

void functionWithNoReturn()
{
    printf("Function with no return\n");
}

int calculateTwoNumbers(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    functionWithNoReturn();

    int result = calculateTwoNumbers(5, 10);
    printf("Result: %d\n", result);

    return EXIT_SUCCESS;
}
