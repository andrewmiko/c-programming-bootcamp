#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    char a = 'A';
    char *p = &a;
    printf("1 | %c | %p | %llu\n", a, p, (uint64_t)p);

    char b = 'B';
    p = &b;
    printf("2 | %c | %p | %llu\n", b, p, (uint64_t)p);

    *p = 'C';
    printf("3 | %c | %p | %llu\n", b, p, (uint64_t)p);

    (*p)++;
    printf("4 | %c | %p | %llu\n", b, p, (uint64_t)p);

    unsigned int x = 'X';
    p = (char *)&x;
    printf("5 | %c | %p | %llu\n", x, p, (uint64_t)p);

    *p = 'Y';
    printf("6 | %c | %p | %llu\n", x, p, (uint64_t)p);

    (*p)++;
    printf("7 | %c | %p | %llu\n", x, p, (uint64_t)p);

    (*p)++;
    printf("8 | %c | %p | %llu\n", x, p, (uint64_t)p);

    return EXIT_SUCCESS;
}
