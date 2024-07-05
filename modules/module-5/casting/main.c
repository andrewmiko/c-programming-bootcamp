#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // Type Casting
    // Type casting is a way to convert a variable from one data type to another data type.
    // For example, if you want to store a long value into a simple integer then you can type cast long to int.
    // You can convert values from one type to another explicitly using the cast operator as follows:
    // (type_name) expression
    // Here, type_name must be a valid C data type including char, w_char, int, float, double, etc., and expression is any valid C expression.
    // Loosing data is possible in type casting.

    printf("Type Casting\n");

    // Integer Promotion
    // If an int can represent all values of the original type, the value is converted to an int; otherwise, it is converted to an unsigned int.
    // These are called the integer promotions. All other types are unchanged by the integer promotions.
    // The integer promotions preserve value including sign.

    char a = 100, b = 5, c = 10;
    char d = (a * b) / c;

    printf("\n");
    printf("Integer Promotion:\n");
    printf("char d = (a * b) / c = %d\n", d);

    char x = 0xFF;          // -1
    unsigned char y = 0xFF; // 255

    printf("\n");
    printf("x == y -> %d\n", x == y);

    return EXIT_SUCCESS;
}
