#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Assignment Operators Table:
    // Operator | Description | Example
    // ---------|-------------|--------
    // =        | Assign      | a = b
    // +=       | Add         | a += b
    // -=       | Subtract    | a -= b
    // *=       | Multiply    | a *= b
    // /=       | Divide      | a /= b
    // %=       | Modulus     | a %= b

    int a = 10;
    int b = 3;

    printf("Assignment Operators\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a += b => %d\n", a += b);
    printf("a -= b => %d\n", a -= b);
    printf("a *= b => %d\n", a *= b);
    printf("a /= b => %d\n", a /= b);
    printf("a %%= b => %d\n", a %= b);

    // Modulus is the remainder of a division operation.
    // 10 % 3 = 1
    // 10 / 3 = 3 with a remainder of 1
    // 10 % 5 = 0
    // 10 / 5 = 2 with a remainder of 0
    // 10 % 20 = 10
    // 10 / 20 = 0 with a remainder of 10

    printf("\n");
    printf("Modulus: \n");
    printf("10 %% 3 = %d\n", 10 % 3);
    printf("10 %% 5 = %d\n", 10 % 5);
    printf("10 %% 20 = %d\n", 10 % 20);

    return EXIT_SUCCESS;
}
