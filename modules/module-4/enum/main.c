#include <stdio.h>
#include <stdlib.h>

enum months
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
    DEC,
};

int main(void)
{
    enum months myBirtdayMonth = NOV;
    enum months wifeBirthdayMonth = APR;

    printf("My birthday month is: %d\n", myBirtdayMonth);
    printf("Wife birthday months is: %d\n", wifeBirthdayMonth);

    return EXIT_SUCCESS;
}
