#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEV,
} Months;

int main(void)
{
    Months myBestMonth = NOV;

    printf("My best month is: %d", myBestMonth);

    return EXIT_SUCCESS;
}