#include <stdio.h>
#include <stdlib.h>

void swap(int *const p1, int *const p2)
{
    printf("Before swap: p1 = %d [%p] | p2 = %d [%p]\n", *p1, p1, *p2, p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swap: p1 = %d [%p] | p2 = %d [%p]\n", *p1, p1, *p2, p2);
}

int main(int argc, char const *argv[])
{

    int x = 10;
    int y = 20;
    swap(&x, &y);

    return EXIT_SUCCESS;
}
