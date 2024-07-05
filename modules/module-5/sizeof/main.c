#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // Sizeof Operator
    // The sizeof operator is used to calculate the size of a variable in bytes.
    // 1 byte = 8 bits

    int a = 10;
    short int s = 10;
    long int l = 10;
    long long int ll = 10;

    float b = 3.14;
    double e = 3.14;
    char c = 'A';
    bool d = true;

    printf("Sizeof Operator:\n");
    printf("int sizeof(%d) = %lu bytes\n", a, sizeof(a));
    printf("short int sizeof(%d) = %lu bytes\n", s, sizeof(s));
    printf("long int sizeof(%ld) = %lu bytes\n", l, sizeof(l));
    printf("long long int sizeof(%lld) = %lu bytes\n", ll, sizeof(ll));
    printf("float sizeof(%f) = %lu bytes\n", b, sizeof(b));
    printf("double sizeof(%f) = %lu bytes\n", e, sizeof(e));
    printf("char sizeof(%c) = %lu byte\n", c, sizeof(c));
    printf("bool sizeof(%d) = %lu byte\n", d, sizeof(d));

    return EXIT_SUCCESS;
}
