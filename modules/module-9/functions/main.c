#include <stdio.h>
#include <stdlib.h>

int accumulate(int *p, int value)
{
    *p += value;
    return *p;
}

void print(int *p)
{
    printf("p = %p | %d\n", p, *p);
}

int main(int argc, char const *argv[])
{
    int x = 10;
    int y = 20;

    accumulate(&x, 5);
    print(&x);

    accumulate(&y, 10);
    print(&y);

    return EXIT_SUCCESS;
}
